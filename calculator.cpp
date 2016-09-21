#include <string>
#include "store.h"

int add(void)
{
	// read values
	int firstNum = read();
	int secondNum = read();

	// add values
	int sum = firstNum + secondNum;

	// return sum
	write(sum);
	return sum;
}