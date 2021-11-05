#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

struct Student {

std::string name;
std::string surename;
std::string index;
int semestr;
double average_rating;

std::string to_string();

Student(std::string n, std::string s, std::string i, int se, double a);

};



#endif
