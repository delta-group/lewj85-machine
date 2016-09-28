#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
int intArray[MAX_SIZE];
int currentPos = 0;

// write function
int write(int valueToStore)
{
    if(currentPos < MAX_SIZE)
    {
    	intArray[currentPos] = valueToStore;
    	currentPos++;
        return 0;  // succeeded
    }
    else
    {
        return -1;  // failed
    }
}

// read function
int read()
{
    if(currentPos <= 0)  // if no values in intArray
    {
        cout << "Not enough values" << endl;
        exit(EXIT_FAILURE);
        return -1;
    }
    else
    {
        currentPos--;    // go back one space to write over
        return intArray[currentPos];
    }
}