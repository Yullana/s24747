#include <iostream>
#include <string>

struct Something
{
private:
std::string words;

public:
Something (std::string word)
{
std::cout << "Constructing " << word <<"\n";
words = word;
}
~Something()
{
std::cout << "DESTRUCTING٩(╬ʘ益ʘ╬)۶ " << words << "\n";
}

};

int main()
{
Something say("world");

std::string x;
std::cout << "What do you want to create? : ";
std::cin >> x;
Something another(x);

std::cout << "Something went wrong\n";
std::cout << ".\n.\n.\n";
return 0;
}
