//-------------------------------------------------------------------------------------------------------------------------------
// main.cpp main class
//
// author Anu Anton Pradeep
// version 01
//
// bug - My program has no bugs.
//-------------------------------------------------------------------------------------------------------------------------------

#include "WeatherLog.h"
#include "Parse.h"
#include "BST.h"
#include "MonthlyLog.h"

//-------------------------------------------------------------------------------------------------------------------------------

#include <string>
#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include <exception>
#include <map>

//-------------------------------------------------------------------------------------------------------------------------------

using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------

typedef map<int, MonthlyLog> YearMap;
typedef BST<MonthlyLog> AllBst;

//-------------------------------------------------------------------------------------------------------------------------------

bool ReadMetFile(WeatherLog &wl, YearMap &ymap);
bool ReadFile(ifstream& file, string &line, WeatherLog &wl, YearMap &ymap);
void InsertIntoBst(AllBst &abst, YearMap &ymap);
int UserMenu();
void MenuOption1(AllBst &abst);
void MenuOption2(AllBst &abst);
void MenuOption3(AllBst &abst);
void MenuOption4(AllBst &abst);
void MenuOption5(AllBst &abst);
string GetDateForOption5(string &date);
int CalDhmkey(int day,int hour, int minute);
int CalYmkey(int year, int mon);
int GetYear();
int GetMonth();
int StringToInt(string s); // function that converts a string into an int using stringstream
float StringToFloat(string s); // function that converts a string into a float using stringstream

//-------------------------------------------------------------------------------------------------------------------------------

int main()
{
    WeatherLog wl;
    YearMap ymap;
    AllBst abst;

    bool yes;
    yes = ReadMetFile(wl, ymap); // reading met index file

    InsertIntoBst(abst, ymap); // function to insert all monthly maps into the bst

    int menu = 0;
    if(yes == true)
    {
        while(menu!=6) // while loop until the user chooses MenuOption 6 (to exit the program)
        {
            menu = UserMenu();

            switch(menu) // switch case is used on the menu MenuOption chosen by the user
            {
            case 1:
                MenuOption1(abst); // The average wind speed and average ambient air temperature for a specified month and year
                break;
            case 2:
                MenuOption2(abst); // Average wind speed and average ambient air temperature for each month of a specified year
                break;
            case 3:
                MenuOption3(abst); // Total solar radiation in kWh/m2 for each month of a specified year
                break;
            case 4:
                MenuOption4(abst); // Average wind speed (km/h), average ambient air temperature and total solar radiation in kWh/m2 for each month of a specified year
                break;
            case 5:
                MenuOption5(abst); // Given a Date in the form dd/mm/yyyy, show the times for the highest solar radiation for that Date
                break;
            case 6:
                cout << "Exiting program: Complete!" << endl;
                break;
            default:
                cout << "Invalid MenuOption. Please choose an action from the menu.";
                break;
            }
        }
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------------------
// This function reads the text file that contains the csv files for the assignment and calls the ReadFile function on all the csv files
bool ReadMetFile(WeatherLog &wl, YearMap &ymap)
{
    string line;
    string heading;
    string rfile;

    ifstream fname("data/met_index.txt");
    if (fname.good())
    {
        cout << "Loading File " ;
        while(fname.good())
        {
            getline(fname,line,'\n');
            stringstream fstring;
            fstring << "data\\" << line;
            rfile = fstring.str();
            ifstream file(rfile);
            ReadFile(file,line,wl,ymap); //function to read through every csv file inside the met index file
        }
        return true;
    }
    else
    {
        cout << "MetFile not found" << endl;
        return false;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
// This function will read from file and insert into a map as a weatherLog object
bool ReadFile(ifstream& file, string &line, WeatherLog &wl, YearMap &ymap)
{
    unsigned dhm,ym;
    string heading;

    MonthlyLog ml;
    Parse pf;

    if (file.good()==true)
    {
        cout << " .";

        getline(file,heading,'\n');
        while(file.good())
        {
            getline(file,line,'\n');

            pf.ParseLog(line);
            wl.GetDate().SetDay(pf.GetParseDay());
            wl.GetDate().SetMonth(pf.GetParseMonth());
            wl.GetDate().SetYear(pf.GetParseYear());

            wl.GetTime().SetHour(pf.GetParseHour());
            wl.GetTime().SetMinute(pf.GetParseMinutes());

            wl.SetSpeed(pf.GetParseWS());
            wl.SetSolarRadiation(pf.GetParseSR());
            wl.SetAmbientTemp(pf.GetParseAT());

            ym = pf.GetYmKey();
            dhm = pf.GetDhmKey();

            ymap[ym].SetYmkey(ym); //function that sets the year-month key into the map
            ymap[ym].AddNewWl(dhm,wl); //function that adds the weather log object into the map

        }
        return true;
        file.close();
    }
    else
    {
        cout << "Error loading " << endl;
        return false;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function that inserts the monthly maps into the BST
void InsertIntoBst(AllBst &abst, YearMap &ymap)
{
    for(map<int, MonthlyLog>::iterator it = ymap.begin() ; it != ymap.end() ; ++it) //for loop to insert the monthlyLog objects to the bst
    {
        if(!abst.Search(it->second))
        {
            abst.Insert(it->second);
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to display the menu for the user to chose an action to be performed
int UserMenu()
{
    int n = 0;

    cout << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "1. The average wind speed and average ambient air temperature for a specified month and year." << endl;
    cout << "2. Average wind speed and average ambient air temperature for each month of a specified year." << endl;
    cout << "3. Total solar radiation in kWh/m2 for each month of a specified year." << endl;
    cout << "4. Average wind speed (km/h), average ambient air temperature and total solar radiation in kWh/m2 for each month of a specified year" << endl;
    cout << "5. Given a Date in the form dd/mm/yyyy, show the times for the highest solar radiation for that Date" << endl;
    cout << "6. Exit the program" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "Enter action number to perform action: " << endl;

    while(!(cin>>n) || n<1 || n>6)
    {
        cout << "Invalid choice please choose from the menu listed: " << endl;
        cin.clear();
        cin.ignore(123,'\n');
    }

    return n;
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to execute option 1 chosen by the user
void MenuOption1(AllBst &abst)
{
    MonthlyLog ml;
    WeatherLog wl;

    int y = 0;
    int m = 0;
    float windSpeed = 0;
    float ambientTemp = 0;

    cout << "You chose menu MenuOption 1" << endl;

    y = GetYear();
    m = GetMonth();

    int key;
    key = CalYmkey(y,m);

    ml.SetYmkey(key);

    if(abst.Search(ml)==true)
    {
        cout << y << endl;
        windSpeed = ml.MonthlyAverageWindSpeed();
        ambientTemp = ml.MonthlyAverageAmbientTemp();

        if (windSpeed > 0 && ambientTemp > 0)
        {
            cout << wl.GetDate().GetStringMonth(m) << " " << windSpeed << " km/h," <<  ambientTemp << " degrees C" << endl;
        }
        else
        {
            cout << wl.GetDate().GetStringMonth(m) << " " << y << ": " << "No Data" << endl;
        }
    }
    else
    {
        cout << "No data for this key" << endl;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to execute option 2 chosen by the user
void MenuOption2(AllBst &abst)
{
    MonthlyLog temp;
    WeatherLog wl;

    int y = 0;

    float windSpeed = 0;
    float ambientTemp = 0;

    cout << "You chose menu option 2" << endl;

    y = GetYear();

    bool found = false;
    for(int m = 1; m < 13; m++)
    {
        int key;
        key = CalYmkey(y,m);

        temp.SetYmkey(key);

        if(abst.Search(temp)==true)
        {
            found = true;
            windSpeed = temp.MonthlyAverageWindSpeed();
            ambientTemp = temp.MonthlyAverageAmbientTemp();

            if (windSpeed > 0 && ambientTemp > 0)
            {
                cout << wl.GetDate().GetStringMonth(m) << " " << windSpeed << " km/h," <<  ambientTemp << " degrees C" << endl;
            }
            else
            {
                cout << wl.GetDate().GetStringMonth(m) << " " << y << ": " << "No Data" << endl;
            }
        }
    }
    if(found == false)
    {
        cout << "No data for this key" << endl;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to execute option 3 chosen by the user
void MenuOption3(AllBst &abst)
{
    MonthlyLog temp;
    WeatherLog wl;

    int y = 0;
    float solarRad = 0;

    cout << "You chose menu option 3" << endl;

    y = GetYear();

    bool found = false;
    for(int m = 1; m < 13; m++)
    {
        int key;
        key = CalYmkey(y,m);

        temp.SetYmkey(key);

        if(abst.Search(temp)==true)
        {
            found = true;
            solarRad = temp.MonthlyTotalSolarRadiation();
            if(solarRad > 0)
            {
                cout << wl.GetDate().GetStringMonth(m) << " " << solarRad << " kWh/m2" << endl;
            }
            else
            {
                cout << wl.GetDate().GetStringMonth(m) << " " << y << ": " << "No Data" << endl;
            }
        }
    }
    if (found == false)
    {
        cout << "No data for this key" << endl;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to execute option 4 chosen by the user
void MenuOption4(AllBst &abst)
{
    MonthlyLog temp;
    WeatherLog wl;

    int y = 0;
    float windSpeed = 0;
    float ambientTemp = 0;
    float solarRad = 0;

    ofstream outputFile("WindTempSolar.csv");

    cout << "You chose menu option 4" << endl;

    y = GetYear();

    outputFile << y << '\n';

    bool found = false;
    for(int m = 1; m < 13; m++)
    {
        int key;
        key = CalYmkey(y,m);

        temp.SetYmkey(key);

        if(abst.Search(temp)==true)
        {
            found = true;
            windSpeed = temp.MonthlyAverageWindSpeed();
            ambientTemp = temp.MonthlyAverageAmbientTemp();
            solarRad = temp.MonthlyTotalSolarRadiation();

            if (windSpeed > 0 && ambientTemp > 0 && solarRad > 0)
            {
                outputFile << wl.GetDate().GetStringMonth(m) << "," << windSpeed << " ," <<  ambientTemp << "," << " " << solarRad << '\n';
            }
        }
    }
    if (found == false)
    {
        cout << "No data for this key" << endl;
    }
    else
    {
        cout << "Output File is ready in the directory" << endl;
    }
    outputFile.close();
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to execute option 5 chosen by the user
void MenuOption5(AllBst &abst)
{
    MonthlyLog temp;
    WeatherLog wl;

        string date,sday,smon,syear;
        int y = 0;
        int m = 0;
        int d = 0;
        float highest;
        int dhmKey = 0;

        cout << "You chose menu option 5" << endl;

        GetDateForOption5(date);
    try
    {
        stringstream ss(date);
        getline(ss,sday,'/');
        d = StringToInt(sday);
        getline(ss,smon,'/');
        m = StringToInt(smon);
        getline(ss,syear);
        y = StringToInt(syear);

        int key;
        key = CalYmkey(y,m);
        temp.SetYmkey(key);

        highest = 0;
        if(abst.Search(temp)==true)
        {
            cout << endl;
            if(d > 0 && d <= 31 && m > 0 && m <=12 && y > 0)
            {
                cout << "Date: " << d << "/" << m << "/" << y << endl;

                for (int h = 0; h < 24; h++)
                {

                    for (int mi = 0; mi < 60; mi+=10)
                    {
                        dhmKey = CalDhmkey(d,h,mi);
                        temp.GetHighestSR(dhmKey, highest);
                    }
                }
                if (highest>0)
                    cout << "High solar radiation for the day: "  << highest << " W/m2" << endl;
                cout << endl;
                cout << "Time: " << endl;
                for (int h = 0; h < 24; h++)
                {
                    for (int mi = 0; mi < 60; mi+=10)
                    {
                        dhmKey = CalDhmkey(d,h,mi);
                        temp.GetSRTimes( highest, dhmKey);
                    }
                }
            }
            else
                cout << "Error searching.." << endl;
        }
    }
    catch(...)
    {
        cout << "Could not perform option 5, please try again" << endl;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to get the date from the user to execute option 5
string GetDateForOption5(string &date)
{
    cout << "Enter date in the form (dd/mm/yyyy): " << endl;
    while (!(cin>>date))
    {
        cout << "Invalid choice Enter date in the form (dd/mm/yyyy): " << endl;
        cin.clear();
        cin.ignore(123,'\n');
    }
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to calculate the day-hour-minute key
int CalDhmkey(int day,int hour, int minute)
{
    int key;
    key = ((day*100)+hour)*100+minute;
    return key;
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to calculate the year-month key
int CalYmkey(int year, int mon)
{
    int key;
    key = (year*100)+mon;
    return key;
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to get the year from user to perform options 1-4
int GetYear()
{
    int y = 0;
    cout << "Enter year: " << endl;
    while(!(cin >> y) || !(y > 1))
    {
        cout << "Invalid year, please enter valid year(2015): " << endl;
        cin.clear();
        cin.ignore(123,'\n');
    }
    return y;
}

//-------------------------------------------------------------------------------------------------------------------------------
// Function to get the month from user to perform options 1-4
int GetMonth()
{
    int m = 0;
    cout << "Enter month: " << endl;
    while(!(cin >> m) || m < 1 || m > 31)
    {
        cout << "Invalid month. please enter valid month(7): " << endl;
        cin.clear();
        cin.ignore(123,'\n');
    }
    return m;
}

//----------------------------------------------------------------------------------------------//
// This function converts a string to an int using stringstream
int StringToInt(string s)
{
    int n;
    stringstream ss(s);
    ss >> n;

    return n;
}

//----------------------------------------------------------------------------------------------//
// This function converts a string to a float using stringstream
float StringToFloat(string s)
{
    float f;
    stringstream ss(s);
    ss >> f;

    return f;
}
//-------------------------------------------------------------------------------------------------------------------------------
// End of class
