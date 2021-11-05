#include <iostream>
#include <string>
#include "../include/s1234/Student.h"

std::string Student::to_string()
{
return "Name: " + name + "\n Surename: " + surename + "\n Index: " + index
        + "\nSemest: " + std::to_string(semestr) + "\n Average rating: " + std::to_string(average_rating);

}

Student::Student(std::string n, std::string s, std::string i, int se, double a){
name = n;
surename = s;
index = i;
semestr = se;
average_rating = a;
}

int main()
{

Student me = {"Hanna", "Herasymenko", "s24747", 1, 4};
std::cout << me.to_string() << "\n";
return 0;
}
