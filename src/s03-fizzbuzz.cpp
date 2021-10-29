#include <iostream>

int main (int argc, char *argv[])
{
int i = std::stoi(argv[1]);
for (int x = 1; x <= i; ++x)
{
if(x%3 == 0 && x%5 == 0)
std::cout << x << " FizzBuzz\n";
else if(x%5 == 0)
std::cout << x << " Buzz\n";
else if(x%3 == 0)
std::cout << x << " Fizz\n";
else 
std::cout << x << "\n";
}
return 0;
}
