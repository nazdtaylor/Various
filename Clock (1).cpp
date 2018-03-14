#include "Clock.h"
#include <iostream>

using namespace std;

Clock::Clock(int hh, int mm, int ss)
{
	hours = hh;
	minutes = mm;
	seconds = ss;
}

void Clock::incrementSeconds(int sec)
{
	seconds += sec;
}

void Clock::incrementMinutes(int min)
{
	minutes += min;
}

void Clock::incrementHours(int hr)
{
	hours += hr;
}

void Clock::addTime(Clock C)
{
	incrementSeconds(C.seconds);
	incrementMinutes(C.minutes);
	incrementHours(C.hours);
}

void Clock::printTime()
{
	int count = 0;
	char* ap = "PM";
	while (seconds >= 60)
	{
		seconds = seconds - 60;
		minutes++;
	}
	while (minutes >= 60)
	{
		minutes = minutes - 60;
		hours++;
	}
	while (hours >= 24)
	{
		hours = hours - 24;
		count++;
	}
	while (hours > 12)
	{
		hours = hours - 12;	
		count++;
	}
	if (hours == 0)
	{
		hours = 12;
	}

	if (count != 0 || count % 2 != 0)
		ap = "PM";
	else
		ap = "AM";
	
	cout << hours << " : " << minutes << " : " << seconds << " " << ap << endl;
}