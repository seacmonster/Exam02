//I affirm that all code given below was written solely by me, Colin, and that any help I received adhered to the rules stated for this exam.

//Colin Bondy
//Test 02

#include "Runner.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("registrants.txt"); //Opens data to be input into the program

	if (fin.fail()) //Shows user if file cannot be found or opened
	{
		cout << "File cannot be opened" << endl;
		return 0;
	}

	vector<Runner*> runnerdata; //vector class for data input

	string firstname;
	string lastname;
	int pace, count = 0;

	do {
		fin >> firstname; //reads first name
		fin >> lastname; //reads second name
		fin >> pace; //reads pace 
		runnerdata.push_back(new Runner(firstname, lastname, pace));
		count++;
	} while (!fin.eof());



	fin.close();
	ofstream white, yellow, green, orange, blue, lilac, red; //Opens documents for writing
	white.open("white.txt");
	yellow.open("yellow.txt");
	green.open("green.txt");
	orange.open("orange.txt");
	blue.open("blue.txt");
	lilac.open("lilac.txt");
	red.open("red.txt");

	for (int i = 0; i < count; i++){

		runnerdata[i]->get_pace(); //Writes names done --Ran out of time to sort the data first into ascending order
			if (runnerdata[i]->get_pace() > 0 && runnerdata[i]->get_pace() < 360)
			{
				white << runnerdata[i]->get_firstname() << " " << runnerdata[i]->get_lastname() << " " << runnerdata[i]->get_pace() << endl;
			}
			if (runnerdata[i]->get_pace() > 361 && runnerdata[i]->get_pace() < 420)
			{
				yellow << runnerdata[i]->get_firstname() << " " << runnerdata[i]->get_lastname() << " " << runnerdata[i]->get_pace() << endl;
			}
			if (runnerdata[i]->get_pace() > 421 && runnerdata[i]->get_pace() < 480)
			{
				green << runnerdata[i]->get_firstname() << " " << runnerdata[i]->get_lastname() << " " << runnerdata[i]->get_pace() << endl;
			}
			if (runnerdata[i]->get_pace() > 481 && runnerdata[i]->get_pace() < 540)
			{
				orange << runnerdata[i]->get_firstname() << " " << runnerdata[i]->get_lastname() << " " << runnerdata[i]->get_pace() << endl;
			}
			if (runnerdata[i]->get_pace() > 541 && runnerdata[i]->get_pace() < 600)
			{
				blue << runnerdata[i]->get_firstname() << " " << runnerdata[i]->get_lastname() << " " << runnerdata[i]->get_pace() << endl;
			}
			if (runnerdata[i]->get_pace() > 601 && runnerdata[i]->get_pace() < 720)
			{
				lilac << runnerdata[i]->get_firstname() << " " << runnerdata[i]->get_lastname() << " " << runnerdata[i]->get_pace() << endl;
			}
			if (runnerdata[i]->get_pace() > 721 && runnerdata[i]->get_pace() < 1200)
			{
				red << runnerdata[i]->get_firstname() << " " << runnerdata[i]->get_lastname() << " " << runnerdata[i]->get_pace() << endl;
			}
	}

	white.close(); //closes documents
	yellow.close();
	green.close();
	orange.close();
	blue.close();
	lilac.close();
	red.close();
}


//I am at a huge loss for how to do this