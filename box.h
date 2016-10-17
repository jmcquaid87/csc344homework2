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
 *       Compiler:  gcc
 *
 *         Author:  Justin McQuaid (jtetra5), jmcquaid@oswego.edu
 *   Organization:  State University of New York at Oswego
 *
 * =====================================================================================
 */

#ifndef BOX_H
#define BOX_H

class Box	
{
	public:
		virtual int stockBox();
    private:
	protected:
		int productCount;
		int boxCount;

}
