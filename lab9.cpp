// Naz Taylor
// CS 215-008
// Lab 9
// 4/10/15
// Purpose: use classes to print a clock.

#include <iostream>
#include "Clock.h"

using namespace std;

int main()
{
	Clock C1(0,0,0);
	Clock C2(12,35,59);
	C1.addTime(C2);
	C1.printTime();
	C2.printTime();
	C1.incrementSeconds(1);
	C1.printTime();
	C1.incrementMinutes(100);
	C1.printTime();
	C1.incrementHours(10);
	C1.printTime();
	C2.printTime();

	system("pause");
	return 0;
}