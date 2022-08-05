#include "MonthlyLog.h"

//---------------------------------------------------------------------------------
// Default constructor
MonthlyLog::MonthlyLog()
{
    Ymkey = 0;
}

//---------------------------------------------------------------------------------
// Non-default constructor
MonthlyLog::MonthlyLog(int key)
{
    Ymkey = key;
}

//---------------------------------------------------------------------------------
//  Getter for year-month key
int MonthlyLog::GetYmkey()
{
    return Ymkey;
}

//---------------------------------------------------------------------------------
// Setter for year-month key
void MonthlyLog::SetYmkey(int key)
{
    Ymkey = key;
}

//---------------------------------------------------------------------------------
// Function to add a new weatherlog object into the map
void MonthlyLog::AddNewWl(int dhmkey, WeatherLog &wl)
{
    if(monthlyMap.find(dhmkey)== monthlyMap.end())
    {
        monthlyMap.insert(std::pair<int, WeatherLog>(dhmkey,wl));
    }
    else
    {
        monthlyMap.erase(dhmkey);
        monthlyMap.insert(std::pair<int, WeatherLog>(dhmkey,wl));
    }
}

//---------------------------------------------------------------------------------
// Function to retrieve a weatherlog object from the map
void MonthlyLog::GetWl(int dhmkey, WeatherLog &wl)
{
    wl = monthlyMap[dhmkey];
}

//---------------------------------------------------------------------------------
// Function to calculate the total windspeed of an entire month
float MonthlyLog::MonthlyAverageWindSpeed()
{
    float totalWS = 0;
    float avgWS = 0;
    float c = 0;
    for (map<int,WeatherLog>::iterator it=monthlyMap.begin(); it!=monthlyMap.end(); ++it)
    {
        totalWS += it->second.GetSpeed();
        c++;
    }
    avgWS = (totalWS*3.6)/c;
    return avgWS;
}

//---------------------------------------------------------------------------------
// Function to calculate the total solarradiation of an entire month
float MonthlyLog::MonthlyTotalSolarRadiation()
{
    float totalSR = 0;
    float avgSR = 0;
    float c = 0;
    for (map<int,WeatherLog>::iterator it=monthlyMap.begin(); it!=monthlyMap.end(); ++it)
    {
        if(it->second.GetSolarRadiation() >= 100)
        {
            totalSR += it->second.GetSolarRadiation();
            c++;
        }
    }
    avgSR = totalSR/6000;
    return avgSR;
}

//---------------------------------------------------------------------------------
// Function to calculate the total ambienttemperature of an entire month
float MonthlyLog::MonthlyAverageAmbientTemp()
{
    float totalAT = 0;
    float avgAT = 0;
    float c = 0;
    for (map<int,WeatherLog>::iterator it=monthlyMap.begin(); it!=monthlyMap.end(); ++it)
    {
        totalAT += it->second.GetAmbientTemp();
        c++;
    }
    avgAT = totalAT/c;
    return avgAT;
}

//---------------------------------------------------------------------------------
// Function to get the highest solar radiation of a map
float MonthlyLog::GetHighestSR(int dhmKey, float &highest)
{
    for (map<int,WeatherLog>::iterator it=monthlyMap.begin(); it!=monthlyMap.end(); ++it)
    {
        if (it->first == dhmKey)
        {
            if (it->second.GetSolarRadiation() > highest)
            {
                highest = it->second.GetSolarRadiation();
            }
        }
    }
    return highest;
}

//---------------------------------------------------------------------------------
// Function that outputs the times of the highest solar radiation
void MonthlyLog::GetSRTimes(float highest, int dhmKey)
{
   // bool found = false;
    for (map<int,WeatherLog>::iterator it=monthlyMap.begin(); it!=monthlyMap.end(); ++it)
    {
       if (it->second.GetSolarRadiation() == highest)
       {
           if(it->first == dhmKey)
           {
              // found = true;
               cout << it->second.GetTime().GetHour() << ":" << it->second.GetTime().GetMinute() << endl;
           }
       }
    }
    //if (!found)
    //    cout << "There was no time for this date.." << endl;
}

//---------------------------------------------------------------------------------
// Overloaded less than operator
bool MonthlyLog::operator < (MonthlyLog &ml)
{
    bool success = false;
    if(Ymkey < ml.GetYmkey())
    {
        success = true;
    }
    else
    {
        success = false;
    }
    return success;
}

//---------------------------------------------------------------------------------
// Overloaded more than operator
bool MonthlyLog::operator > (MonthlyLog &ml)
{
    bool success = false;
    if(Ymkey > ml.GetYmkey())
    {
        success = true;
    }
    else
    {
        success = false;
    }
    return success;
}

//---------------------------------------------------------------------------------
// Overloaded equals operator
bool MonthlyLog::operator == (MonthlyLog &ml)
{
    bool success = false;
    if(Ymkey == ml.GetYmkey())
    {
        success = true;
    }
    else
    {
        success = false;
    }
    return success;
}

//---------------------------------------------------------------------------------
// Overloaded not equals operator
bool MonthlyLog::operator != (MonthlyLog &ml)
{
    bool success = false;
    if(Ymkey != ml.GetYmkey())
    {
        success = true;
    }
    else
    {
        success = false;
    }
    return success;
}
//---------------------------------------------------------------------------------
// End of class
