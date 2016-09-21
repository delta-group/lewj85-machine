#include <iostream>
#include <string>
#include <cstring>
#include "machine.h"
#include "store.h"
#include "calculator.h"

using namespace std;

int machine(void)
{
	string input;		// initialize "input" as a string
	bool machineOn = true;  // keep looping ">" prompts

	while(machineOn)
	{
		// initialize newInput
		string newInput = "";

		// prompt
		cout << ">";

		// assign input to "input"
		getline (cin, input);

		// check input for "0"-"9"
		for(int i = 0; i < strlen(input.c_str()); i++)
		{
			if(input[i]>='0' && input[i]<='9')
			{
				cout << input[i];
				newInput.append(input,i,1);  // append each digit
			}
			write(stoi(newInput));  // convert to int
		}

		// check input for "add"
		if(input == "add")
		{
			cout << "add";
		}

	// next line
	cout << endl;
	}

	return 0;
}
