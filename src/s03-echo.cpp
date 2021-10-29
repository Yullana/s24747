#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
std::string op1 = argv[1];

std::string op2 = argv[2];


if(op1 == "-r" && op2 == "-l")
{
for(int i = argc - 1; i > 2; --i)
{
std::cout << " " << argv[i] <<"\n";
}
}
else if(op1 == "-r" && op2 == "-n")
{
for(int i = argc - 1; i > 2; --i)
{
std::cout << " " << argv[i];
}
}
else if(op1 == "-n")
{
for (int i = 2; i < argc; ++i)
{
std::cout << " " << argv[i];
}
}
else if(op1 == "-r")
{
for(int i = argc - 1; i > 1; --i)
{
std::cout << " " << argv[i];
}
std::cout << "\n";
}
else if(op1 == "-l")
{
for (int i = 2; i < argc; ++i)
{
std::cout << argv[i] << "\n";
}
}
else
{
for (int i = 1; i < argc; ++i)
{
std::cout << " " << argv[i];
}
std::cout << "\n";
}
return 0;
}
