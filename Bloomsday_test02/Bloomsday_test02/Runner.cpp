//I affirm that all code given below was written solely by me, Colin, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include <fstream>
#include "Runner.h"

using namespace std;

	
Runner::Runner(string firstname, string lastname, int pace) //takes in all the data
	{
		Firstname = firstname;
		Lastname = lastname;
		Pace = pace;
	}

	string Runner::get_firstname()
	{

		
		return Firstname;
	}

	string Runner::get_lastname()
	{
		
		return Lastname;
	}

	int Runner::get_pace()
	{
		
		return Pace;
	}


