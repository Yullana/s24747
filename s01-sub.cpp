#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    auto const a = std::stoi(argv[6]);
    auto const b = std::stoi(argv[4]);
    std::cout << (a - b) << "\n";
    return 0;
}
