#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
#include <clocale>
#include <cmath>

struct Time {

int hour;
int minute;
int second;

Time(int h, int m, int s);

//Zadanie: Czas

std::string to_string()
{
auto hours = std::to_string(abs(hour));
auto minutes = std::to_string(abs(minute));
auto seconds = std::to_string(abs(second));

//HH:MM:SS
if (hour < 10 && hour >= 0)
hours = "0" + hours;

if (minute < 10 && minute >= 0)
minutes = "0" + minutes;

if (second < 10 && second >= 0)
seconds = "0" + seconds;

return hours + ":" + minutes + ":" + seconds;
}

void next_hour()
{
++hour;
if (hour > 23)
hour = 0;
}

void next_minute()
{
++minute;
if (minute > 59)
{
minute = 0;
++hour; 
}
}

void next_second()
{
++second;
if(second >59)
{
second = 0;
++minute; 
}
}

// Zadanie: Pora dnia

enum class Time_of_day
{
MORNING,
AFTERNOON,
EVENING,
NIGHT

};

Time_of_day tod;
auto time_of_day()
{

if (hour >= 4 && hour <= 11)
tod = Time_of_day::MORNING;

else if (hour >= 12 && hour <= 15)
tod = Time_of_day::AFTERNOON;

else if (hour >= 16 && hour <= 23)
tod = Time_of_day::EVENING;

else if (hour >= 0 && hour <= 3)
tod = Time_of_day::NIGHT;
}

std::string time_of_day_to_string()
{
switch (tod)
{
case Time_of_day::MORNING:   return "Morning";
case Time_of_day::AFTERNOON: return "Afternoon";
case Time_of_day::EVENING:   return "Evening";
case Time_of_day::NIGHT:     return "Night";
default:        return "";
}
}

// Zadanie: Arytmetyka

long total_seconds (Time arg)
{
return arg.hour * 3600 + arg.minute * 60 + arg.second;
}
 
auto transformation (long arg)
{
int h, m, s;
    
m = (arg / 60);
s = (arg % 60);
h = (m / 60);
m = (m % 60);
     
second = s;
minute = m;
hour = h; 
} 

long time_add(long x, long y)
{
return x += y;
}

long time_sub(long x, long y)
{
return x -= y;
}

bool time_compare(long x, long y)
{
return (x > y);
}

bool time_equality(long x, long y)
{
return (x == y);
}

//Zadanie: Sekundy do północy
long count_seconds(long x)
{
long seconds_in_day = 86400;
return x -= seconds_in_day;
}
};



#endif
