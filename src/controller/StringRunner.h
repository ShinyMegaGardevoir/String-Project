/*
 * StringRunner.h
 *
 *  Created on: Jan 25, 2016
 *      Author: csad2045
 */

#ifndef SRC_CONTROLLER_STRINGRUNNER_H_
#define SRC_CONTROLLER_STRINGRUNNER_H_
#include <string>
using namespace std;

class StringController {
public:
	StringController();
	void setMyName(string myName);
	void setLength(int length);
	void setOtherString(string otherString);
	~StringController();
	string getMyName();
	int getLength();
	string getOtherString();
	void start();

private:
	string myName;
	int length;
	string otherString;
};

#endif /* SRC_CONTROLLER_STRINGRUNNER_H_ */
