/*
 * StringRunner.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: csad2045
 */

#include "StringRunner.h"
#include <iostream>
#include <string>
using namespace std;


StringController::StringController() {
	this->myName = "Christina";
	this->length = myName.size();
	this->otherString = "Emily";

}

void StringController :: setMyName(string myName)
{
	this->myName = myName;
}

void StringController :: setLength(int length)
{
	this->length = length;
}

void StringController :: setOtherString(string otherString)
{
	this->otherString = otherString;
}

string StringController :: getMyName()
{
	return this->myName;
}

int StringController :: getLength()
{
	return this->length;
}

string StringController :: getOtherString()
{
	return this->otherString;
}



StringController::~StringController()
{

}

void StringController :: start()
{
	cout << "The current string is '" << myName << "'." << endl;

	cout << "The current string has " << length << " character(s)." << endl;

	if(myName.empty())
	{
		cout << "The string is empty." << endl;
	}
	else
	{
		cout << "The string is not empty." << endl;
	}
	if(myName.compare(otherString) > 0)
	{
		cout << myName.compare(otherString) << endl;
	}

	cout << "The value at 2 (the 3rd letter starting at 0) is: " << myName[2] << endl;

	cout << "The value at 3 (the 4th letter starting at 0) is: " << myName.at(3) << endl;
}

