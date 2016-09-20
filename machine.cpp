#include <iostream>
#include <string>
#include <cstring>
#include "machine.h"

using namespace std;

int machine()
{
	string input;		// initialize "input" as a string
	bool machineOn = true;  // keep looping ">" prompts

	while(machineOn)
	{
		// set/reset bools
		bool allNums = false;    // are all values numbers
		bool stringAdd = false;  // is the string "add"		

		// prompt
		cout << ">";

		// assign input to "input"
		getline (cin, input);

		// check input for "0"-"9"
		for(int i = 0; i < strlen(input.c_str()); i++)
		{
			if(input[i]>='0' && input[i]<='9')
			{
				allNums = true;
				cout << input[i];
			}
			else
			{
				allNums = false;
			}
		}

		// check input for "add"
		if(input == "add")
		{
			stringAdd = true;
			cout << "add";
		}
	cout << endl;
	}

	return 0;
}
