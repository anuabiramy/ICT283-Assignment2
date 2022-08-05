//// bstTest.cpp bst class test implementation
//#include <iostream>
//#include <string>
//#include "BST.h"
//
//using namespace std;
//
//void PrintInData(int &obj);
//void PrintStData(string &obj);
//void PrintFlData(float &obj);
//void PrintIntOrder(int &obj);
//void PrintStringOrder(string &obj);
//void PrintFloatOrder(float &obj);
//void test1();
//void test2();
//void test3();
//void test4();
//void test5();
//void test6();
//void test7();
//void test8();
//void test9();
//void test10();
//void test11();
//void test12();
//void test13();
//void test14();
//void test15();
//void test16();
//
//int main()
//{
//    cout << "Testing BST class" << endl;
//    cout << "-----------------------------------------------------------------------------" << endl;
//    //cout << "Test number, Description, Input data, Output data, Success/Fail" << endl;
//    test1(); // test Insert for 7 int values
//    test2(); // test InOrder 7 int value
//    test3(); // test PreOrder for 7 int values
//    test4(); // test PostOrder for 7 int values
//    test5(); // test valid using Search for 7 int values
//    test6(); // test invalid using Search for 7 int values
//    test7(); // test DeleteTree tree for 7 int values
//    test8(); // test copy constructor
//    test9(); // test overloaded assignment operator
//    test10(); // test Insert for 7 string values
//    test11(); // test Insert for 7 float values
//    test12(); // test pre order for 7 string values
//    test13(); // test pre order for 7 float values
//    test14(); //test post order for 7 string values
//    test15(); //test post order for 7 float values
//    test16(); // test Insert for 10000 ints
//
//    return 0;
//}
//
//void test1()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    cout << "Test 1," << "Testing Insert," << "Inserting 7 ints to BST," << endl;
//    abst.InOrder(PrintInData);
//    cout << "Success" << endl;
//    cout << endl;
//}
//
//void test2()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    cout << "Test 2," << "Testing InOrder," << "Inserting 7 ints to BST," << endl;
//    abst.InOrder(PrintIntOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//
//void test3()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    cout << "Test 3," << "Testing PreOrder," << "Inserting 7 ints to BST," << endl;
//    abst.PreOrder(PrintIntOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//
//void test4()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    cout << "Test 4," << "Testing PostOrder," << "Inserting 7 ints to BST," << endl;
//    abst.PostOrder(PrintIntOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//
//void test5()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    int s = 23;
//    cout << "Test 5," << "Testing valid Search," << "searching 23 which already exists in the bst ," << endl;
//
//    cout << "search" << endl;
//    if(abst.Search(s) == true)
//    {
//        cout << "Found, Success" << endl;
//    }
//    else
//    {
//        cout << "Not found, Fail" << endl;
//    }
//    cout << endl;
//}
//
//void test6()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    int s = 88;
//    cout << "Test 6," << "Testing invalid Search," << "searching 23 which does not exist in the bst ," << endl;
//
//    cout << "search" << endl;
//    if(abst.Search(s) == true)
//    {
//        cout << "Found, Fail" << endl;
//    }
//    else
//    {
//        cout << "Not found, success" << endl;
//    }
//    cout << endl;
//}
//
//void test7()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    cout << "Test 7," << "Testing DeleteTree," << "deleting 7 ints from BST," << endl;
//    abst.DeleteTree();
//    cout << "DeleteTree nodes, Success" << endl;
//    cout << endl;
//}
//
//void test8()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    BST<int> abst2(abst);
//    cout << "Test 8," << "Testing copy constructor," << "copying 7 ints from abst to abst2," << endl;
//    abst2.InOrder(PrintInData);
//    cout << "Copy completed, Success" << endl;
//    cout << endl;
//}
//void test9()
//{
//    BST<int> abst;
//    int n;
//
//    n = 3;
//    abst.Insert(n);
//    n = 7;
//    abst.Insert(n);
//    n = 34;
//    abst.Insert(n);
//    n = 23;
//    abst.Insert(n);
//    n = 78;
//    abst.Insert(n);
//    n = 58;
//    abst.Insert(n);
//    n = 5;
//    abst.Insert(n);
//
//    BST<int> abst2;
//    abst2 = abst;
//    cout << "Test 9," << "Testing Overloaded assignment operator," << "Assigning 7 ints from abst to abst2," << endl;
//    abst2.InOrder(PrintInData);
//    cout << "Assignment completed, Success" << endl;
//    cout << endl;
//}
//void test10()
//{
//    BST<string> abst;
//    string s;
//    s = "Hello World";
//    abst.Insert(s);
//    s = "Hello Mars";
//    abst.Insert(s);
//    s = "Hello Venus";
//    abst.Insert(s);
//    s = "Hello Mercury";
//    abst.Insert(s);
//    s = "Hello Earth";
//    abst.Insert(s);
//    s = "Hello Jupiter";
//    abst.Insert(s);
//    s = "Hello Saturn";
//    abst.Insert(s);
//
//    cout << "Test 10," << "Testing InOrder with strings," << "Inserting 7 string to BST," << endl;
//    abst.InOrder(PrintStringOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//void test11()
//{
//    BST<float> abst;
//    float n;
//
//    n = 3.123;
//    abst.Insert(n);
//    n = 7.234;
//    abst.Insert(n);
//    n = 34.456;
//    abst.Insert(n);
//    n = 23.567;
//    abst.Insert(n);
//    n = 78.765;
//    abst.Insert(n);
//    n = 58.654;
//    abst.Insert(n);
//    n = 5.567;
//    abst.Insert(n);
//
//    cout << "Test 11," << "Testing InOrder for float," << "Inserting 7 floats to BST," << endl;
//    abst.InOrder(PrintFloatOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//void test12()
//{
//    BST<string> abst;
//    string s;
//    s = "Hello World";
//    abst.Insert(s);
//    s = "Hello Mars";
//    abst.Insert(s);
//    s = "Hello Venus";
//    abst.Insert(s);
//    s = "Hello Mercury";
//    abst.Insert(s);
//    s = "Hello Earth";
//    abst.Insert(s);
//    s = "Hello Jupiter";
//    abst.Insert(s);
//    s = "Hello Saturn";
//    abst.Insert(s);
//
//    cout << "Test 12," << "Testing PreOrder with strings," << "Inserting 7 string to BST," << endl;
//    abst.PreOrder(PrintStringOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//void test13()
//{
//    BST<float> abst;
//    float n;
//
//    n = 3.123;
//    abst.Insert(n);
//    n = 7.234;
//    abst.Insert(n);
//    n = 34.456;
//    abst.Insert(n);
//    n = 23.567;
//    abst.Insert(n);
//    n = 78.765;
//    abst.Insert(n);
//    n = 58.654;
//    abst.Insert(n);
//    n = 5.567;
//    abst.Insert(n);
//
//    cout << "Test 13," << "Testing PreOrder for float," << "Inserting 7 floats to BST," << endl;
//    abst.PreOrder(PrintFloatOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//void test14()
//{
//    BST<string> abst;
//    string s;
//    s = "Hello World";
//    abst.Insert(s);
//    s = "Hello Mars";
//    abst.Insert(s);
//    s = "Hello Venus";
//    abst.Insert(s);
//    s = "Hello Mercury";
//    abst.Insert(s);
//    s = "Hello Earth";
//    abst.Insert(s);
//    s = "Hello Jupiter";
//    abst.Insert(s);
//    s = "Hello Saturn";
//    abst.Insert(s);
//
//    cout << "Test 14," << "Testing PostOrder with strings," << "Inserting 7 string to BST," << endl;
//    abst.PostOrder(PrintStringOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//void test15()
//{
//    BST<float> abst;
//    float n;
//
//    n = 3.123;
//    abst.Insert(n);
//    n = 7.234;
//    abst.Insert(n);
//    n = 34.456;
//    abst.Insert(n);
//    n = 23.567;
//    abst.Insert(n);
//    n = 78.765;
//    abst.Insert(n);
//    n = 58.654;
//    abst.Insert(n);
//    n = 5.567;
//    abst.Insert(n);
//
//    cout << "Test 15," << "Testing PostOrder for float," << "Inserting 7 floats to BST," << endl;
//    abst.PostOrder(PrintFloatOrder);
//    cout << "Success" << endl;
//    cout << endl;
//}
//void test16()
//{
//    BST<int> abst;
//
//    for(int i = 0; i < 10000 ; i++)
//    {
//        abst.Insert(i);
//    }
//    int s;
//    s = abst.size();
//    cout << "Test 16," << " Testing insert for 10000 ints," << " Inserting 10000 ints to BST," << " Size: " << s << " Success" << endl;
//
//}
//
//void PrintInData(int &obj)
//{
//    cout << "Inserted int node" << endl;
//}
//
//void PrintStData(string &obj)
//{
//    cout << "Inserted string node" << endl;
//}
//
//void PrintFlData(float &obj)
//{
//    cout << "Inserted float node" << endl;
//}
//
//void PrintIntOrder(int &obj)
//{
//    cout << obj << endl;
//}
//
//void PrintStringOrder(string &obj)
//{
//    cout << obj << endl;
//}
//
//void PrintFloatOrder(float &obj)
//{
//    cout << obj << endl;
//}
