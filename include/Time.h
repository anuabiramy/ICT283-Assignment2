//---------------------------------------------------------------------------------
// Time.H
// Class representing Time
//
//
//
//---------------------------------------------------------------------------------

#ifndef TIME_H
#define TIME_H

//---------------------------------------------------------------------------------

#include <string>
#include <iostream>


using namespace std;

//---------------------------------------------------------------------------------

/**
 * @class Time
 * @brief  Contains all Time related variables and methods.
 *
 * @author Anu Anton Pradeep
 * @version 01
 * @date 27/11/2021 Anu AP, started adding doxygen comments
 *
 * @bug My program has no bugs.
 */
class Time
{
public:

    /** \brief Default constructor for time class
     * \param None
     * \return None
     */
    Time();

    /** \brief Default destructor for time class
     * \param None
     * \return None
     */
    ~Time(){};

    /** \brief Non default constructor
     * \param Unsigned h, unsigned m
     * \return None
     */
    Time(unsigned h, unsigned m);

    /** \brief Getter for hour
     * \param None
     * \return Unsigned hour
     */
    unsigned GetHour();

    /** \brief Getter for minute
     * \param None
     * \return Unsigned minute
     */
    unsigned GetMinute();

    /** \brief Setter for hour
     * \param unsigned h
     * \return None
     */
    void SetHour(unsigned h);

    /** \brief Setter for minute
     * \param unsigned m
     * \return None
     */
    void SetMinute(unsigned m);

    /** \brief Overloaded more than operator
     * \param Time& time
     * \return Bool true/false
     */
    bool operator > (Time& time);

    /** \brief Overloaded less than operator
     * \param Time& time
     * \return Bool true/false
     */
    bool operator < (Time& time);

    /** \brief Overloaded equals operator
     * \param Time& time
     * \return Bool true/false
     */
    bool operator == (Time& time);

    /** \brief Overloaded not equals operator
     * \param Time& time
     * \return Bool true/false
     */
    bool operator != (Time& time);

    /** \brief Overloaded assignment operator
     * \param Time& time
     * \return Time object
     */
    Time& operator = (Time& time);


private:
    unsigned hour = 0; /// unsigned variable to contain hours separately
    unsigned minute = 0; /// unsigned variable to contain minutes separately
};

#endif // TIME_H
