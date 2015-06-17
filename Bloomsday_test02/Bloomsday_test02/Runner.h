//I affirm that all code given below was written solely by me, Colin, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include <fstream>

#ifndef RUNNER_H
#define RUNNER_H

using namespace std;

class Runner
{
	public:
		Runner(string firstname, string lastname, int pace);
		string get_firstname();
		string get_lastname();
		int get_pace();

	private:
		string Firstname;
		string Lastname;
		int Pace;

};

#endif