#include <iostream>
#include <string>



int main(int argc, char *argv[])
{
if (argc != 2)
{
std::cout << "You forgot to type your number\n";
return 1;
}
int i = std::stoi(argv[1]);
for (; i >= 0; --i)
{
std::cout << i << "...\n";
}


return 0;
}
