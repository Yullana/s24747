#include <iostream>
#include <string>



int main(int argc, char *argv[])
{
if (argc != 2)
{
std::cout << "You forgot to type your password\n";
return 1;
}
std::string i;
do
{
std::cout << "Password: ";
std::cin >> i;
}while (i != argv[1]);
std::cout << "ok !\n";

return 0;
}

