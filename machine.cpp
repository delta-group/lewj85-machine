#include <iostream>
#include <string>
#include <cstring>
#include "machine.h"

using namespace std;

int machine()
{
	string input;      // initialize "input" as a string
	bool allNums = true;    // are all values numbers
	bool stringAdd = true;  // is the string "add"
	bool machineOn = true;  // keep looping ">" prompts

	while(machineOn)
	{
		//prompt
		cout << ">";

		// assign input to "input"
		getline (cin, input);

		// check input for all numbers
		int i;  // index counter
		for(i=0; strlen(input.c_str()); i++)
		{
			if(input[i]=='0' || input[i]=='1' || 
			input[i]=='2' || input[i]=='3' || input[i]=='4' 
			|| input[i]=='5' || input[i]=='6' || 
			input[i]=='7' || input[i]=='8' || input[i]=='9')
			{
				allNums = true;
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
		}

		// echo valid inputs
		if(allNums == true || stringAdd == true)
		{ 
			cout << input;
		}
	}

	return 0;
}
