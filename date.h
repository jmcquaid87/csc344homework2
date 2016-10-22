/*
 * =====================================================================================
 *
 *       Filename:  date.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/19/2016 07:59:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin McQuaid (jtetra5), jmcquaid@oswego.edu
 *   Organization:  State University of New York at Oswego
 *
 * =====================================================================================
 */

#ifndef DATE_H
#define DATE_H
#include <string>

class Date
{
	friend bool operator<(Date, Date);

    public:
		Date(int m, int d, int y);
		~Date()	{}
	protected:
		int month;
		int day;
		int year;
};

#endif
