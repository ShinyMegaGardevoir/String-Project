/*
 * ConsolePrinter.h
 *
 *  Created on: Jan 25, 2016
 *      Author: csad2045
 */
#include <string>
using namespace std;


#ifndef SRC_VIEW_CONSOLEPRINTER_H_
#define SRC_VIEW_CONSOLEPRINTER_H_

class ConsolePrinter {
public:
	ConsolePrinter();
	virtual ~ConsolePrinter();
	void print(string *current);
};

#endif /* SRC_VIEW_CONSOLEPRINTER_H_ */
