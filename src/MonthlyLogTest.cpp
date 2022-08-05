//// monthlyLog.h test class implementation
//
//#include "WeatherLog.h"
//#include "MonthlyLog.h"
//#include <iostream>
//#include <fstream>
//#include <map>
//#include <string>
//
//using namespace std;
////void (*fptr)(MonthlyLog&) = &printData;
//
//void test1();
//void test2();
//void test3();
//void test4();
//void test5();
//void test6();
//
//int main()
//{
//    test1();//test setter for ymkey
//    test2();//test getter for ymkey
//    test3();//test overloaded less than operator
//    test4();//test overloaded more than operator
//    test5();//test overloaded equals operator
//    test6();//test overloaded not equals operator
//
//
//
//    return 0;
//}
//
//void test1()
//{
//    MonthlyLog ml;
//    cout << "Test 1 " << "Testing setter for ymKey" << " 2014, 3" << endl;
//    int ym;
//    ym = (2014*100)+3;
//    ml.SetYmkey(ym);
//
//    if (ml.GetYmkey() == ym)
//    {
//        cout << "ymKey: " << ml.GetYmkey() << " Success" << endl;
//    }
//    else
//    {
//        cout << "ymKey: " << ml.GetYmkey() << " Fail" << endl;
//    }
//}
//
//void test2()
//{
//    MonthlyLog ml;
//    cout << "Test 2 " << "Testing getter for ymKey" << " Calling ml.GetYmkey() after setting 2015, 3" << endl;
//    int ym;
//    ym = (2015*100)+3;
//    ml.SetYmkey(ym);
//
//    if (ml.GetYmkey() == ym)
//    {
//        cout << "ymKey: " << ml.GetYmkey() << " Success" << endl;
//    }
//    else
//    {
//        cout << "ymKey: " << ml.GetYmkey() << " Fail" << endl;
//    }
//}
//
//void test3()
//{
//    MonthlyLog ml;
//    MonthlyLog ml2;
//    cout << "Test 3 " << "Testing overloaded less than operator " << "Comparing 2 monthlyLog objects ml and ml2 " << endl;
//    int ym;
//
//    ym = (2016*100)+4;
//    ml.SetYmkey(ym);
//
//    ym = (2013*100)+3;
//    ml2.SetYmkey(ym);
//
//    if(ml2<ml)
//    {
//        cout << "ml2 is less than ml: " << ml2.GetYmkey() << " Success" << endl;
//    }
//    else
//    {
//        cout << "ml2 is not less than ml: " << ml2.GetYmkey() << " Fail" << endl;
//    }
//
//}
//
//void test4()
//{
//    MonthlyLog ml;
//    MonthlyLog ml2;
//    cout << "Test 4 " << "Testing overloaded more than operator " << "Comparing 2 monthlyLog objects ml and ml2 " << endl;
//    int ym;
//
//    ym = (2016*100)+4;
//    ml.SetYmkey(ym);
//
//    ym = (2017*100)+3;
//    ml2.SetYmkey(ym);
//
//    if(ml2>ml)
//    {
//        cout << "ml2 is more than ml: " << ml2.GetYmkey() << " Success" << endl;
//    }
//    else
//    {
//        cout << "ml2 is not more than ml: " << ml2.GetYmkey() << " Fail" << endl;
//    }
//}
//
//void test5()
//{
//    MonthlyLog ml;
//    MonthlyLog ml2;
//    cout << "Test 5 " << "Testing overloaded equals operator " << "Comparing 2 monthlyLog objects ml and ml2 " << endl;
//    int ym;
//
//    ym = (2016*100)+3;
//    ml.SetYmkey(ym);
//
//    ym = (2016*100)+3;
//    ml2.SetYmkey(ym);
//
//    if(ml2==ml)
//    {
//        cout << "ml2 is equals to ml: " << ml2.GetYmkey() << " Success" << endl;
//    }
//    else
//    {
//        cout << "ml2 is not equals to ml: " << ml2.GetYmkey() << " Fail" << endl;
//    }
//}
//
//void test6()
//{
//    MonthlyLog ml;
//    MonthlyLog ml2;
//    cout << "Test 6 " << "Testing overloaded not equals operator " << "Comparing 2 monthlyLog objects ml and ml2 " << endl;
//    int ym;
//
//    ym = (2016*100)+4;
//    ml.SetYmkey(ym);
//
//    ym = (2017*100)+3;
//    ml2.SetYmkey(ym);
//
//    if(ml2!=ml)
//    {
//        cout << "ml2 is not equal to ml: " << ml2.GetYmkey() << " Success" << endl;
//    }
//    else
//    {
//        cout << "ml2 is equal to ml: " << ml2.GetYmkey() << " Fail" << endl;
//    }
//}
//
