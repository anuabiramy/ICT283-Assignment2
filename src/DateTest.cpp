//
//// date class test implementation
//// datetest.cpp - Date test implementation class.
//
////-------------------------------------------------------------------------------/
//
//#include "Date.h"
//
////-------------------------------------------------------------------------------/
//
//#include <iostream>
//#include <string>
//#include <exception>
//
////-------------------------------------------------------------------------------/
//
//using namespace std;
//
////-------------------------------------------------------------------------------/
//
//void DateTest1();
//void DateTest2();
//void DateTest3(Date& d);
//void DateTest4(Date& d);
//void DateTest5(Date& d);
//void DateTest6(Date& d);
//void DateTest7(Date& d);
//void DateTest8(Date& d);
//void DateTest9(Date& d);
//void DateTest10(Date& d);
//void DateTest11(Date& d);
//void DateTest12(Date& d);
//void DateTest13(Date& d);
//void DateTest14(Date& d);
//void DateTest15(Date& d);
//void DateTest16(Date& d);
//void DateTest17(Date& d);
//void DateTest18(Date& d);
//void DateTest19(Date& d);
//void DateTest20(Date& d);
//void DateTest21(Date& d);
//void DateTest22(Date& d);
//void DateTest23(Date& d);
//void DateTest24(Date& d);
//void DateTest25(Date& d);
//
//
////-------------------------------------------------------------------------------/
//
//int main()
//{
//    Date d;
//
//    cout << "Testing Date class" << endl;
//    cout << "-----------------------------------------------------------------------------" << endl;
//    cout << "Test number, Description, Input data, Output data, Success/Fail" << endl;
//    DateTest1(); //test default constructor
//    DateTest2(); //test non default constructor
//    DateTest3(d); //test getter for day
//    DateTest4(d); //test getter for month
//    DateTest5(d); //test getter for year
//    DateTest6(d); //test setter for day
//    DateTest7(d); //test setter for month
//    DateTest8(d); //test setter for year
//    DateTest9(d); //test setter for minus value for day
//    DateTest10(d); //test setter for minus value for month
//    DateTest11(d); //test setter for minus value for year
//    DateTest12(d); //test setter for for non-existing day
//    DateTest13(d); //test setter for non-existing month
//    //DateTest14(d); //test setter for string value for day
//    //DateTest15(d); //test setter for string value for month
//    //DateTest16(d); //test setter for string value for year
//    DateTest17(d); //test string value for GetStringMonth
//    DateTest18(d); //test minus value for GetStringMonth
//    DateTest19(d); //test all 12 months for GetStringMonth
//    DateTest20(d); //test float value for GetStringMonth
//    DateTest21(d); //test for overloaded less than operator
//    DateTest22(d); //test for overloaded more than operator
//    DateTest23(d); //test for overloaded equals operator
//    DateTest24(d); //test for overloaded not equals operator
//    DateTest25(d); // testing overloaded assignment operator
//
//
//}
//
////-------------------------------------------------------------------------------/
//void DateTest1()
//{
//    Date d;
//    cout << "Test 1," << "Testing constructor," << "Date()," << "Day:" << d.GetDay() << "-Month:" << d.GetMonth() << "-Year:" << d.GetYear() << "," << "Success" << endl;
//
//}
//
////-------------------------------------------------------------------------------/
//void DateTest2()
//{
//    Date d(12,05,2020);
//    cout << "Test 2," << "Testing non default constructor," << "Date(12,05,2020)," << "Day:" << d.GetDay() << "-Month:" << d.GetMonth() << "-Year:" << d.GetYear() << "," << "Success" << endl;
//
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest3(Date& d)
//{
//
//    if (d.GetDay() == 0)
//    {
//        cout << "Test 3," << "Testing getter for day," << "None," << "Day: " << d.GetDay() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 3," << "Testing getter for day," << "None," << "Day: " << d.GetDay() << "," << "Fail" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest4(Date& d)
//{
//    if (d.GetMonth() == 0)
//    {
//        cout << "Test 4," << "Testing getter for Month," << "None," << "Month: " << d.GetStringMonth(d.GetMonth()) << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 4," << "Testing getter for Month," << "None," << "Month: " << d.GetStringMonth(d.GetMonth()) << "," << "Fail" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest5(Date& d)
//{
//    if (d.GetYear() == 0)
//    {
//        cout << "Test 5," << "Testing getter for Year," << "None," << "Year: " << d.GetYear() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 5," << "Testing getter for Year," << "None," << "Year: " << d.GetYear() << "," << "Fail" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest6(Date& d)
//{
//    d.SetDay(23);
//    unsigned day = d.GetDay();
//    if(day == 23)
//    {
//        cout << "Test 6," << "Testing setter for day," << "23," << "Day: " << d.GetDay() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 6," << "Testing setter for day," << "23," << "Day: " << d.GetDay() << "," << "Fail" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest7(Date& d)
//{
//    d.SetMonth(10);
//    unsigned m = d.GetMonth();
//    if(m == 10)
//    {
//        cout << "Test 7," << "Testing setter for Month," << "10," << "Month: " << d.GetStringMonth(m) << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 7," << "Testing setter for Month," << "10," << "Month: " << d.GetStringMonth(m) << "," << "Fail" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest8(Date& d)
//{
//    d.SetYear(2015);
//    unsigned y = d.GetYear();
//    if (y == 2015)
//    {
//        cout << "Test 8," << "Testing setter for Year ," << "2015," << "Year: " << d.GetYear() << "," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 8," << "Testing setter for Year ," << "2015," << "Year: " << d.GetYear() << "," << "Fail" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest9(Date& d)
//{
//    d.SetDay(-23);
//    if(d.GetDay() == -23)
//    {
//        cout << "Test 9," << "Testing setter with minus value for day ," << "-23," << "Day: " << d.GetDay() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 9," << "Testing setter with minus value for day ," << "-23," << "Day: " << d.GetDay() << "," << "Success" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest10(Date& d)
//{
//    d.SetMonth(-10);
//    unsigned m = d.GetMonth();
//    if(m == -10)
//    {
//        cout << "Test 10," << "Testing setter with minus for Month ," << "-10," << "Month: " << d.GetStringMonth(m) << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 10," << "Testing setter with minus for Month ," << "-10," << "Month: " << d.GetStringMonth(m) << "," << "Success" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest11(Date& d)
//{
//    d.SetYear(-2015);
//    unsigned y = d.GetYear();
//    if (y == -2015)
//    {
//        cout << "Test 11," << "Testing setter with minus for Year ," << "-2015," << "Year: " << d.GetYear() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 11," << "Testing setter with minus for Year ," << "-2015," << "Year: " << d.GetYear() << "," << "Success" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest12(Date& d)
//{
//    d.SetDay(123);
//    if(d.GetDay() == 123)
//    {
//        cout << "Test 12," << "Testing setter for for non-existing day ," << "123," << "Day: " << d.GetDay() << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 12," << "Testing setter for for non-existing day ," << "123," << "Day: " << d.GetDay() << "," << "Success" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest13(Date& d)
//{
//    d.SetMonth(15);
//    unsigned m = d.GetMonth();
//    if(m == 15)
//    {
//        cout << "Test 13," << "Testing setter for non-existing Month ," << "15," << "Month: " << d.GetStringMonth(m) << "," << "Fail" << endl;
//    }
//    else
//    {
//        cout << "Test 13," << "Testing setter for non-existing Month ," << "15," << "Month: " << d.GetStringMonth(m) << "," << "Success" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest14(Date& d)
//{
//    int day;
//    try
//    {
//        cout << "Enter day: " << endl;
//        cin >> day;
//        if(d.SetDay(day))
//        {
//            cout << "Test 14," << "Testing setter for string value for day," << "hello," << "Day: " << day << "," << "Fail" << endl;
//        }
//        else
//        {
//          throw "";
//        }
//    }
//    catch(...)
//    {
//        cout << "Test 14," << "Testing setter for string value for day ," << "hello," << "Unable to set string into an int variable," << "Success" << endl;
//
//    }
//
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest15(Date& d)
//{
//    int month;
//    try
//    {
//        cout << "Enter Month: " << endl;
//        cin >> month;
//        if(d.SetMonth(month))
//        {
//            cout << "Test 15," << "Testing setter for string value for Month," << "hello," << "Day: " << d.GetMonth() << "," << "Fail" << endl;
//        }
//        else
//        {
//          throw "";
//        }
//    }
//    catch(...)
//    {
//        cout << "Test 15," << "Testing setter for string value for Month ," << "hello," << "Unable to set string into an int variable," << "Success" << endl;
//
//    }
//
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest16(Date& d)
//{
//   int year;
//    try
//    {
//        cout << "Enter Year: " << endl;
//        cin >> year;
//        if(d.SetYear(year))
//        {
//            cout << "Test 16," << "Testing setter for string value for Year," << "hello," << "Day: " << d.GetYear() << "," << "Fail" << endl;
//        }
//        else
//        {
//          throw "";
//        }
//    }
//    catch(...)
//    {
//        cout << "Test 16," << "Testing setter for string value for Year ," << "hello," << "Unable to set string into an int variable," << "Success" << endl;
//
//    }
//
//
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest17(Date& d)
//{
//
//
//    cout << "Test 17," << "testing string value for GetStringMonth ," << "hello," << "Unable to set string into an int," << "Success" << endl;
//
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest18(Date& d)
//{
//    unsigned i = -5;
//    cout << "Test 18," << "testing minus value for GetStringMonth ," << "hello," << "Month: " << d.GetStringMonth(i) << "," << "Success" << endl;
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest19(Date& d)
//{
//
//    for (unsigned i = 1; i < 13; i++)
//    {
//        cout << "Test 19." << i << "," << "testing all months for GetStringMonth, " << i << "," << "Month: " << d.GetStringMonth(i) << "," << "Success" << endl;
//    }
//}
//
////-------------------------------------------------------------------------------/
//
//void DateTest20(Date& d)
//{
//    float f = 2.3;
//    cout << "Test 20," << "testing minus value for GetStringMonth," << "2.3," << "Month: " << d.GetStringMonth(f) << "," << "Success" << endl;
//}
//
//void DateTest21(Date& d)
//{
//    d.SetDay(25);
//    d.SetMonth(3);
//    d.SetYear(2000);
//
//    Date d2;
//    d2.SetDay(24);
//    d2.SetMonth(03);
//    d2.SetYear(2000);
//
//    if(d2<d)
//    {
//       cout << "Test 21," << "testing overloaded less than operator, " << "2 object d and d2 are compared," << "Yes d2 is less than d," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 21," << "testing overloaded less than operator, " << "2 object d and d2 are compared," << "Yes d2 is not less than d," << "Fail" << endl;
//    }
//}
//
//
//void DateTest22(Date& d)
//{
//    d.SetDay(25);
//    d.SetMonth(3);
//    d.SetYear(2000);
//
//    Date d2;
//    d2.SetDay(26);
//    d2.SetMonth(03);
//    d2.SetYear(2000);
//
//    if(d2>d)
//    {
//       cout << "Test 22," << "testing overloaded more than operator, " << "2 object d and d2 are compared," << "Yes d2 is more than d," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 22," << "testing overloaded more than operator, " << "2 object d and d2 are compared," << "Yes d2 is not more than d," << "Fail" << endl;
//    }
//}
//
//
//void DateTest23(Date& d)
//{
//    d.SetDay(25);
//    d.SetMonth(3);
//    d.SetYear(2000);
//
//    Date d2;
//    d2.SetDay(25);
//    d2.SetMonth(03);
//    d2.SetYear(2000);
//
//    if(d2==d)
//    {
//       cout << "Test 23," << "testing overloaded equals than operator, " << "2 object d and d2 are compared," << "Yes d2 is equals to d," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 23," << "testing overloaded equals than operator, " << "2 object d and d2 are compared," << "Yes d2 is not equal to d," << "Fail" << endl;
//    }
//}
//
//
//void DateTest24(Date& d)
//{
//    d.SetDay(25);
//    d.SetMonth(3);
//    d.SetYear(2000);
//
//    Date d2;
//    d2.SetDay(12);
//    d2.SetMonth(03);
//    d2.SetYear(2012);
//
//    if(!(d2!=d))
//    {
//       cout << "Test 24," << "testing overloaded not equals than operator, " << "2 object d and d2 are compared," << "Yes d2 is not equals to d," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 24," << "testing overloaded not equals than operator, " << "2 object d and d2 are compared," << "Yes d2 is equal to d," << "Fail" << endl;
//    }
//}
//
//void DateTest25(Date& d)
//{
//    d.SetDay(25);
//    d.SetMonth(3);
//    d.SetYear(2000);
//
//    Date d2;
//
//    d2 = d;
//    if(d2==d)
//    {
//        cout << "Test 25," << "testing overloaded assignment operator, " << "Date objct d2 is assigned Date object d," << "Yes d was successfully assigned to d," << "Success" << endl;
//    }
//    else
//    {
//        cout << "Test 25," << "testing overloaded assignment operator, " << "Date objct d2 is assigned Date object d," << "Yes d was not successfully assigned to d," << "Fail" << endl;
//    }
//}
//
