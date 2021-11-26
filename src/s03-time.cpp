#include <iostream>
#include <string>
#include "../include/s1234/Time.h"


Time::Time(int h, int m, int s)
{
hour = h;
minute = m;
second = s;
}


int main()
{
//Zadanie: Czas
time_t t = time(0);
tm* now = localtime(&t);

Time right_now = {now->tm_hour, now->tm_min, now->tm_sec};

std::cout << "Time: " << right_now.to_string() << "\n";

right_now.time_of_day();
std::cout << "Time of day: " << right_now.time_of_day_to_string() << "\n";

//Add one hour, minute and second
right_now.next_second();
right_now.next_minute();
right_now.next_hour();

std::cout << "Next: " << right_now.to_string() << "\n";

//Zadanie: Pora dnia
right_now.time_of_day();
std::cout << "Time of day: " << right_now.time_of_day_to_string() << "\n";

//Zadanie: Arytmetyka

Time time1 = {0, 0, 0};
Time time2 = {0, 0, 0};
Time time_plus = {0, 0, 0};
Time time_minus = {0, 0, 0};
     
long t_sec1 = 0;
long t_sec2 = 0; 
long t_sec_plus = 0;
long t_sec_minus = 0;

std::cout << "\n";        
std::cout << "Enter first time (h:m:s) - ";  
std::cin >> time1.hour >> time1.minute >> time1.second;
std::cout << "Enter second time (h:m:s) - ";  
std::cin >> time2.hour >> time2.minute >> time2.second;
std::cout << "\n";
     
std::cout << "First: " << time1.to_string() << "\n";
std::cout << "Second: " << time2.to_string() << "\n";

t_sec1 = time1.total_seconds(time1);
t_sec2 = time2.total_seconds(time2);
     
t_sec_plus = time_plus.time_add(t_sec1, t_sec2);
     
std::cout << "Sum of time = ";
time_plus.transformation(t_sec_plus);
std::cout << time_plus.to_string() << "\n";

t_sec_minus = time_minus.time_sub(t_sec1, t_sec2);
     
std::cout << "Time difference = ";

time_minus.transformation(t_sec_minus);
std::cout << time_minus.to_string() << "\n";

if (time1.time_compare(t_sec1, t_sec2)) 
std::cout << "Time comparison: " << time1.to_string() << " > " << time2.to_string() << "\n";
else if (t_sec1 == t_sec2)
std::cout << "Time comparison: " << time1.to_string() << " = " << time2.to_string() << "\n";
else
std::cout << "Time comparison: " << time1.to_string() << " < " << time2.to_string() << "\n";

if (time1.time_equality(t_sec1, t_sec2)) 
std::cout << "Time equality: " << time1.to_string() << " = " << time2.to_string() << "\n";
else
std::cout << "Time equality: " << time1.to_string() << " ≠ " << time2.to_string() << "\n";

//Zadanie: Sekundy do północy

Time time_midnight = {0, 0, 0};
long t_sec_midnight = 0;


std::cout << "\n";        
std::cout << "Let's count the time to midnight. Enter time (h:m:s) - ";  
std::cin >> time_midnight.hour >> time_midnight.minute >> time_midnight.second;
std::cout << "Your time - " << time_midnight.to_string() << "\n";

t_sec_midnight = time_midnight.total_seconds(time_midnight);
t_sec_midnight = time_midnight.count_seconds(t_sec_midnight);

std::cout << "Time to midnight - ";
time_midnight.transformation(t_sec_midnight);
std::cout << time_midnight.to_string() << "\n";

return 0;
}

