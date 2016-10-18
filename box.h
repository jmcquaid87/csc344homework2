/*
 * =====================================================================================
 *
 *       Filename:  box.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/16/2016 02:12:46 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Justin McQuaid (jtetra5), jmcquaid@oswego.edu
 *   Organization:  State University of New York at Oswego
 *
 * =====================================================================================
 */

#ifndef BOX_H
#define BOX_H
#include <iostream>
#include <string>
using namespace std;

class Box	
{
	public:
		Box(string, string, int)    {};
		~Box()    {};
		void stockBox();
		void buyProduct();
	protected:
		int productCount;
		int boxCount;
		string productType;
		string date;

};

#endif
