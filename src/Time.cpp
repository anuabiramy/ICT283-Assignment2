// Time.cpp - Time class implementation.

#include "time.h"

//---------------------------------------------------------------------------------
//A default constructor
Time::Time()
{
    hour = 0;
    minute = 0;
}

//---------------------------------------------------------------------------------
// A non default constructor
Time::Time(unsigned h, unsigned m)
{
    hour = h;
    minute = m;
}

//---------------------------------------------------------------------------------
// A getter for hour
unsigned Time::GetHour()
{
    return hour;
}

//---------------------------------------------------------------------------------
// A getter for minute
unsigned Time::GetMinute()
{
    return minute;
}

//---------------------------------------------------------------------------------
// A setter for hour
void Time::SetHour(unsigned h)
{
    if (h >= 0 && h < 24)
    {
        hour = h;
    }
    else
    {
        hour = 0;
    }
}

//---------------------------------------------------------------------------------
// A setter for minute
void Time::SetMinute(unsigned m)
{
    if (m >= 0 && m < 60)
    {
        minute = m;
    }
    else
    {
        minute = 0;
    }

}

//---------------------------------------------------------------------------------
//Overloaded more than operator
bool Time::operator > (Time& time)
{
    bool success = false;
    if(GetHour() > time.GetHour())
    {
        success = true;
    }
    else if(GetHour() == time.GetHour())
    {
        if(GetMinute() > time.GetMinute())
        {
            success = true;
        }
    }
    else
        success = false;

    return success;
}

//---------------------------------------------------------------------------------
//Overloaded less than operator
bool Time::operator < (Time& time)
{
    bool success = false;
    if(GetHour() < time.GetHour())
    {
        success = true;
    }
    else if(GetHour() == time.GetHour())
    {
        if(GetMinute()< time.GetMinute())
        {
            success = true;
        }
    }
    else
        success = false;

    return success;
}

//---------------------------------------------------------------------------------
//Overloaded equals operator
bool Time::operator == (Time& time)
{
    bool success = false;
    if (GetHour() == time.GetHour())
    {
        if (GetMinute() == time.GetMinute())
        {
            success = true;
        }
    }
    else
    {
        success = false;
    }
    return success;
}

//---------------------------------------------------------------------------------
//Overloaded not equals operator
bool Time::operator != (Time& time)
{
    bool success = false;
    if (GetHour() != time.GetHour())
    {
        if (GetMinute() != time.GetMinute())
        {
            success = true;
        }
    }
    else
    {
        success = false;
    }
    return success;
}

//---------------------------------------------------------------------------------
//Overloaded assignment operator
Time& Time::operator = (Time& time)
{
    hour = time.GetHour();
    minute = time.GetMinute();
    return *this;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------//
// End of class
