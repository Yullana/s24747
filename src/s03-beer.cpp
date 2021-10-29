#include <iostream>
#include <iostream>

int main (int argc, char *argv[])
{

int bottles = 99;

if( argc >= 2)
bottles = std::stoi(argv[1]);

for (int bottlesNumber = bottles; 1 < bottlesNumber; --bottlesNumber)
{
std::cout << bottlesNumber << " bottles of beer on the wall, " << bottlesNumber << " bottles of beer\n";
std::cout << "Take one down, pass it around, " << bottlesNumber - 1 << " bottles of beer on the wall\n";
}

std::cout << "1 bottles of beer on the wall, " << "1 bottles of beer\n";
std::cout << "No more bottles of beer on the wall, no more bottles of berr\n";
std::cout << "Go to the store and buy some more, " << bottles << " bottles of beer on the wall\n";

return 0;
}
