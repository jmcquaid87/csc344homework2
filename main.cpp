/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/18/2016 12:51:10 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Justin McQuaid (jtetra5), jmcquaid@oswego.edu
 *   Organization:  State University of New York at Oswego
 *        License:  The MIT License - Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <queue>
#include "box.h"
using namespace std;

//priority_queue <Box *> box;

Box::Box(string d, string t, int c)
{
	productType = t;
	date = d;
	productCount = c;
}

int main(int argc, char *argv[])
{
	string event;
	Date date;
	string type;
	int boxCount;
	while (true)	{
	    cin >> event;
	   if (event == "q")	{
		   break;
	   }	
		cin >> date;	
		cin >> type;
	   if (type == "q")	{
		   break;
	   }	   
		cin	>> boxCount;
		if (boxCount == "q")	{	
		    break;
		}
	    //cout << event << date << type << boxCount;
	}
//	priority_queue <Box> pqBox;

}
