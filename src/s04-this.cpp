#include <iostream>

struct Numbers
{
int number;

void print()
{
std::cout << "this: " << this << "\n";
}
Numbers (int number)
{
this->number=number;
}

auto equality(Numbers* results)
{
if (this == results)
std::cout << this << " = " << results << "\n";
else
std::cout << "Error\n";
}
};

int main()
{
Numbers x(5);
x.print();
std::cout << "&: " << &x << "\n";

auto results = &x;

x.equality(results);

return 0;
}
