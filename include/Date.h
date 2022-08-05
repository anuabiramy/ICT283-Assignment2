//---------------------------------------------------------------------------------
// Date.H
// Class representing Date
//
//
//
//---------------------------------------------------------------------------------

#ifndef DATE_H
#define DATE_H

//---------------------------------------------------------------------------------

#include <string>
#include <iostream>
#include <ostream>


using namespace std;

//---------------------------------------------------------------------------------
/**
 * @class Date
 * @brief Date class contains all date related variables and methods along with the accessor methods for all the member variables
 *
 * @author Anu Anton Pradeep
 * @version 01
 * @date 24/10/2021 Anu AP
 *
 * @bug My program has no bugs.
 */
class Date
{
public:

    /** \brief Default constructor for date class
     * \param None
     * \return None
     */
    Date();

    /** \brief Default destructor for date class
     * \param None
     * \return None
     */
    ~Date(){};

    /** \brief Non default constructor for date class
     * \param unsigned d, unsigned m, unsigned y
     * \return None
     */
    Date(unsigned d, unsigned m, unsigned y);

    /** \brief Setter for day
     * \param unsigned d
     * \return Bool true/false
     */
    bool SetDay(unsigned d);

    /** \brief Getter for day
     * \param None
     * \return unsigned day
     */
    unsigned GetDay();

    /** \brief Setter for month
     * \param unsigned m
     * \return bool true/false
     */
    bool SetMonth(unsigned m);

    /** \brief Getter for month
     * \param None
     * \return unsigned month
     */
    unsigned GetMonth();

    /** \brief Setter for year
     * \param unsigned y
     * \return bool true/false
     */
    bool SetYear(unsigned y);

    /** \brief Getter for year
     * \param None
     * \return unsigned year
     */
    unsigned GetYear();

    /** \brief Function to return the textual format of the month by getting in the integer value
     * \param unsigned m
     * \return string month
     */
    string GetStringMonth(unsigned m);

    /** \brief Overloaded less than operator
     * \param Date object
     * \return bool true/false
     */
    bool operator < (Date& thisObj);

    /** \brief Overloaded more than operator
     * \param Date object
     * \return bool true/false
     */
    bool operator > (Date& thisObj);

    /** \brief Overloaded equals operator
     * \param Date object
     * \return bool true/false
     */
    bool operator == (Date& thisObj);

    /** \brief Overloaded not equals operator
     * \param Date object
     * \return bool true/false
     */
    bool operator != (Date& thisObj);

    /** \brief Overloaded assignment operator
     * \param Date object
     * \return bool true/false
     */
    Date& operator = (Date& D);

private:
    unsigned day = 0;   /// unsigned variables to contain day separately
    unsigned month = 0; /// unsigned variables to contain month separately
    unsigned year = 0;  /// unsigned variables to contain year separately
};

ostream& operator << ( ostream &os,  Date& D );
#endif // DATE_H
