//// timetest.cpp - Time test implementation class.
//
////-------------------------------------------------------------------------------/
//
//#include "Time.h"
//
////-------------------------------------------------------------------------------/
//
//#include <iostream>
//#include <string>
//
////-------------------------------------------------------------------------------/
//
//using namespace std;
//
////-------------------------------------------------------------------------------/
//
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
//void test15(Time& t);
//void test16(Time& t);
//void test17(Time& t);
//void test18(Time& t);
//void test19(Time& t);
//
////-------------------------------------------------------------------------------/
//
//int main()
//{
//    Time t;
//
//    cout << "Testing Time class" << endl;
//    cout << "-----------------------------------------------------------------------------" << endl;
//    cout << "Test number, Description, Input data, Output data, Success/Fail" << endl;
//
//    test1(); //test default constructor
//    test2(); //test non-default constructor
//    test3(); //test getter for hour
//    test4(); //test getter for minute
//    test5(); //test setter for hour
//    test6(); //test setter for minute
//    test7(); //test setter for minus value for hour
//    test8(); //test setter for minus value for minute
//    test9(); //test setter for non-existing hour
//    test10(); //test setter for none-existing minute
//    test11(); //test setter for string value for hour
//    test12(); //test setter for string value for minute
//    test13(); //test setter for float value for hour
//    test14(); //test setter for float value for minute
//    test15(t); //test overloaded less than operator
//    test16(t); //test overloaded more than operator
//    test17(t); //test overloaded equals operator
//    test18(t); //test overloaded not equals operator
//    test19(t); //test overloaded assignment operator
//}
//
////-------------------------------------------------------------------------------/
//
//void test1()
//{
//    Time t;
//    if (t.GetHour() == 0 && t.GetMinute() == 0)
//    {
//        cout << "Test 1," << "Testing Default constructor," << "Calling default constructor," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 1," << "Testing Default constructor," << "Calling default constructor," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test2()
//{
//    Time t(16,10);
//    if (t.GetHour() == 16 && t.GetMinute() == 10)
//    {
//        cout << "Test 2," << "Testing Non-Default constructor," << "Passing values 16-10," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 2," << "Testing Non-Default constructor," << "Passing values 16-10," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test3()
//{
//    Time t(12,25);
//    unsigned h = t.GetHour();
//
//    if(h == 12)
//    {
//        cout << "Test 3," << "Testing Getter for hour," << "Setting hour to 12," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 3," << "Testing Getter for hour," << "Setting hour to 12," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test4()
//{
//    Time t(12,25);
//    unsigned m = t.GetMinute();
//
//    if(m == 25)
//    {
//        cout << "Test 4," << "Testing Getter for minute," << "Setting minute to 25," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 4," << "Testing Getter for minute," << "Setting minute to 25," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test5()
//{
//    Time t;
//    t.SetHour(15);
//    t.SetMinute(55);
//
//    unsigned h = t.GetHour();
//    if (h == 15)
//    {
//        cout << "Test 5," << "Testing Setter for hour," << "Setting hour to 15," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 5," << "Testing Setter for hour," << "Setting hour to 15," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test6()
//{
//    Time t;
//    t.SetHour(15);
//    t.SetMinute(55);
//
//    unsigned m = t.GetMinute();
//    if (m == 55)
//    {
//        cout << "Test 6," << "Testing Setter for minute," << "Setting minute to 55," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 6," << "Testing Setter for minute," << "Setting minute to 55," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test7()
//{
//    Time t;
//    t.SetHour(-15);
//    t.SetMinute(-55);
//
//    unsigned h = t.GetHour();
//    if (h == -15)
//    {
//        cout << "Test 7," << "Testing Setter for hour with minus value," << "Setting hour to -15," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 7," << "Testing Setter for hour with minus value," << "Setting hour to -15," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test8()
//{
//    Time t;
//    t.SetHour(-15);
//    t.SetMinute(-55);
//
//    unsigned m = t.GetMinute();
//    if (m == -55)
//    {
//        cout << "Test 8," << "Testing Setter for minute with minus value," << "Setting minute to -55," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 8," << "Testing Setter for minute with minus value," << "Setting minute to -55," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test9()
//{
//    Time t;
//    t.SetHour(30);
//    t.SetMinute(75);
//
//    unsigned h = t.GetHour();
//    if (h == 30)
//    {
//        cout << "Test 9," << "Testing Setter for non-existing hour," << "Setting hour to 30," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 9," << "Testing Setter for non-existing hour," << "Setting hour to 30," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test10()
//{
//    Time t;
//    t.SetHour(30);
//    t.SetMinute(75);
//
//    unsigned m = t.GetMinute();
//    if (m == 75)
//    {
//        cout << "Test 10," << "Testing Setter for non-existing minute," << "Setting minute to 75," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 10," << "Testing Setter for non-existing minute," << "Setting minute to 75," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test11()
//{
//    Time t;
//   /** try
//    {
//        t.SetHour("Hello World");
//        t.SetMinute("Hello World");
//
//        unsigned h = t.GetHour();
//        cout << "Test 11," << "Testing Setter for hour with string value," << "Setting hour to Hello World," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//    catch(...)
//    {
//        cout << "Test 11," << "Testing Setter for hour with string value," << "Setting hour to Hello World," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    } */
//    cout << "Test 11," << "Testing setter with string value for hour," << "hello," << "Compiling error," << "Fail" << endl;
//}
//
////---------------------------------------------------------------------------------------------
//void test12()
//{
//    Time t;
//   /** try
//    {
//        t.SetHour("Hello World");
//        t.SetMinute("Hello World");
//
//        unsigned m = t.GetMinute();
//        cout << "Test 12," << "Testing Setter for minute," << "Setting minute to Hello World," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//    catch(...)
//    {
//        cout << "Test 12," << "Testing Setter for minute," << "Setting minute to Hello World," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }*/
//    cout << "Test 12," << "Testing setter with string value for Minute," << "hello," << "Compiling error," << "Fail" << endl;
//}
//
////---------------------------------------------------------------------------------------------
//void test13()
//{
//    Time t;
//    t.SetHour(12.45);
//    t.SetMinute(12.45);
//
//    unsigned h = t.GetHour();
//    if (h == 12.45)
//    {
//        cout << "Test 13," << "Testing Setter for non-existing hour," << "Setting hour to 12.45," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 13," << "Testing Setter for non-existing hour," << "Setting hour to 12.45," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//}
//
////---------------------------------------------------------------------------------------------
//void test14()
//{
//    Time t;
//    t.SetHour(12.45);
//    t.SetMinute(12.45);
//
//    unsigned m = t.GetMinute();
//    if (m == 12.45)
//    {
//        cout << "Test 14," << "Testing Setter for minute with float value," << "Setting minute to 12.45 ," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 14," << "Testing Setter for minute with float value," << "Setting minute to 12.45 ," << "Hour: " << t.GetHour() << " Minute: "
//             << t.GetMinute() << "," << "Success" << endl;
//    }
//}
//
//
//void test15(Time& t)
//{
//    t.SetHour(12);
//    t.SetMinute(45);
//
//    Time t2;
//    t2.SetHour(11);
//    t2.SetMinute(45);
//
//    if(t2<t)
//    {
//        cout << "Test 15," << "Testing overloaded less than operator," << "Comparing 2 Time objects t and t2," << "Yes t2 is less than t," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 15," << "Testing overloaded less than operator," << "Comparing 2 Time objects t and t2," << "Yes t2 is not less than t," << "Fail" << endl;
//    }
//}
//void test16(Time& t)
//{
//    t.SetHour(12);
//    t.SetMinute(45);
//
//    Time t2;
//    t2.SetHour(14);
//    t2.SetMinute(45);
//
//    if(t2>t)
//    {
//        cout << "Test 16," << "Testing overloaded more than operator," << "Comparing 2 Time objects t and t2," << "Yes t2 is more than t," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 16," << "Testing overloaded more than operator," << "Comparing 2 Time objects t and t2," << "Yes t2 is not more than t," << "Fail" << endl;
//    }
//}
//void test17(Time& t)
//{
//    t.SetHour(12);
//    t.SetMinute(45);
//
//    Time t2;
//    t2.SetHour(12);
//    t2.SetMinute(45);
//
//    if(t2==t)
//    {
//        cout << "Test 17," << "Testing overloaded equals operator," << "Comparing 2 Time objects t and t2," << "Yes t2 is equals to t," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 17," << "Testing overloaded equals operator," << "Comparing 2 Time objects t and t2," << "Yes t2 is not equals to t," << "Fail" << endl;
//    }
//}
//void test18(Time& t)
//{
//    t.SetHour(12);
//    t.SetMinute(45);
//
//    Time t2;
//    t2.SetHour(9);
//    t2.SetMinute(45);
//
//    if(!(t2!=t))
//    {
//        cout << "Test 18," << "Testing overloaded not equals operator," << "Comparing 2 Time objects t and t2," << "Yes t2 is not equals to t," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 18," << "Testing overloaded not equals operator," << "Comparing 2 Time objects t and t2," << "Yes t2 is equals to t," << "Fail" << endl;
//    }
//}
//void test19(Time& t)
//{
//    t.SetHour(17);
//    t.SetMinute(25);
//
//    Time t2;
//
//    t2 = t;
//    if(t2==t)
//    {
//        cout << "Test 19," << "Testing overloaded assignment operator," << "Assigning Time object t to another Time object t2," << "Successfully assigned t to t2," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 19," << "Testing overloaded assignment operator," << "Assigning Time object t to another Time object t2," << "Successfully assigned t to t2," << "Fail" << endl;
//    }
//}
