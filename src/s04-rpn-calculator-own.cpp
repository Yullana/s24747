#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>

float calculate (float x, float y, std::string op)
{

if(op == "+")
 return x + y;
else if(op == "-")
 return x - y;
else if(op == "*")
 return x * y;
else if(op == "/")
 return x / y;
else if(op == "//")
{
int a = x;
int b = y;
 return a / b;
}
else if(op == "%")
{
int a = x;
int b = y;
 return a % b;
}
else if(op == "**")
 return pow(x, y);
else if(op == "sqrt")
 return sqrt(x);
else if(op == "md")
 return abs(x);
else 
return 0;
}


int main(int argc, char *argv[])
{
auto x = std::stoi(argv[1]);
float y = 1;
std::string op = "something";

if(argc == 3)
op = argv[2];
else
{
y = std::stoi(argv[2]);
op = argv[3];
}

std::cout << calculate(x, y, op) << "\n";
return 0;
}
