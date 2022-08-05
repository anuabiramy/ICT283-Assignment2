//---------------------------------------------------------------------------------
// MonthlyLog.H
// Class representing Date
//
//
//
//---------------------------------------------------------------------------------
#ifndef MONTHLYLOG_H
#define MONTHLYLOG_H

//---------------------------------------------------------------------------------------------------

#include "WeatherLog.h"
#include <map>

//---------------------------------------------------------------------------------------------------

using namespace std;

//---------------------------------------------------------------------------------------------------
/**
 * @class MonthlyLog
 * @brief MonthlyLog Log class contains all the monthly map related data and methods along with the calculations of the weather needed for assignment 2.
 *
 * @author Anu Anton Pradeep
 * @version 01
 * @date 24/10/2021 Anu AP - added doxy comments
 *
 * @bug My program has no bugs.
 */
class MonthlyLog
{
public:

    /** \brief Default constructor for monthly log class
     * \param None
     * \return None
     */
    MonthlyLog();

    /** \brief None default constructor that creates a monthly log object with a ymkey
     * \param int key
     * \return None
     */
    MonthlyLog(int key);

    /** \brief Default destructor for monthly log class
     * \param None
     * \return None
     */
    ~MonthlyLog() {};

    /** \brief Getter for year-month key
     * \param None
     * \return int Ymkey
     */
    int GetYmkey();

    /** \brief Setter for year-month key
     * \param int key
     * \return None
     */
    void SetYmkey(int key);

    /** \brief Function to add a weather log object into the monthly map
     * \param int dhmkey, WeatherLog &wl
     * \return None
     */
    void AddNewWl(int dhmkey, WeatherLog &wl);

    /** \brief Function to retrieve a weather log object from the map
     * \param int dhmkey, WeatherLog &wl
     * \return None
     */
    void GetWl(int dhmkey, WeatherLog &wl);

    /** \brief Function to calculate the average windspeed of an entire month in the map
     * \param None
     * \return float windspeed
     */
    float MonthlyAverageWindSpeed();

    /** \brief Function to calculate the average solar radiation of an entire month in the map
     * \param None
     * \return float solar radiation
     */
    float MonthlyTotalSolarRadiation();

    /** \brief Function to calculate the average ambient temp of an entire month in the map
     * \param None
     * \return float ambient temperature
     */
    float MonthlyAverageAmbientTemp();

    /** \brief Function to get the highest solar radiation from the map
     * \param int dhmKey, float &highest
     * \return float highest sr
     */
    float GetHighestSR(int dhmKey, float &highest);

    /** \brief Function to the times where the solar radiation was the highest
     * \param float highest, int dhmKey
     * \return None
     */
    void GetSRTimes(float highest, int dhmKey);

    /** \brief Overloaded less than operator
     * \param MonthlyLog &ml
     * \return bool true/false
     */
    bool operator < (MonthlyLog &ml);

    /** \brief Overloaded more than operator
     * \param MonthlyLog &ml
     * \return bool true/false
     */
    bool operator > (MonthlyLog &ml);

    /** \brief Overloaded equals operator
     * \param MonthlyLog &ml
     * \return bool true/false
     */
    bool operator == (MonthlyLog &ml);

    /** \brief Overloaded not equals operator
     * \param MonthlyLog &ml
     * \return bool true/false
     */
    bool operator != (MonthlyLog &ml);

private:
    int Ymkey = 0; /// local variable to store the year-month year
    map<int, WeatherLog> monthlyMap;/// map that stores all the months worth of weatherlogs
};

#endif // MONTHLYLOG_H
