/*******************************************************************************
 * AUTHOR        : Dillon Welsh
 * ASSIGNMENT 3  : DATE CLASS
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 09/15/2020
 ******************************************************************************/

#include "date.h"
#include "date.cpp"

/*******************************************************************************
 * DATE CLASS
 *______________________________________________________________________________
 * Write a C++ program that can ouput a calendar date as either a number form or
 * a word form
 *______________________________________________________________________________
 * INPUT:
 *  N/A
 *
 * OUTPUT:
 *  Date object
 ******************************************************************************/

void test1()
{
    cout << "1. Default" << endl;
    Date x = Date();
    cout << "numeric:\t" ;
    x.printNumeric(); cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "­­­­­­­­­­­­­-------------" << endl;
}

void test2()
{
    cout << "2. Numeric Date: 7.3.1991" << endl;
    Date x = Date(7,3,1991);
    cout << "numeric:\t" ;
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "­­­­­­­­­­­­­-------------" << endl;
}

void test3()
{
    cout << "3. Alpha Date: July 3, 1991" << endl;
    Date x = Date("July",3,1991);
    cout << "numeric:\t" ;
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "-------------­­­­­­­­­­­­­" << endl;
}

void test4()
{
    cout << "4. Invalid Numeric Date: 0.3.1991 ­> 1.3.1991" << endl;
    Date x = Date(0,10,1991);
    cout << "numeric:\t" ;
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "­­­­­­­­­­­­­-------------" << endl;
}

void test5()
{
    cout << "5. Invalid Alpha Date: 1.adf.1991 ­> 1.1.2000" << endl;
    Date x = Date("adf",1, 1991);
    cout << "numeric:\t" ; x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "­­­­­­­­­­­­­-------------" << endl;
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
}
