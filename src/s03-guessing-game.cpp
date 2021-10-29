#include <iostream>
#include <cstdlib> 
#include <ctime> 
 
int get_random_number(int min, int max)
{
static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
 

bool play_game(int guesses, int number)
{
    
for (int count = 1; count <= guesses; ++count)
{
std::cout << "Guess #" << count << ": ";
int guess;
std::cin >> guess;
 
if (guess > number)
std::cout << "Number too big.\n";
else if (guess < number)
std::cout << "Number too small.\n";
else 
return true;
}
 
return false;
}
 
bool play_again()
{
    
char answer;
do
{
std::cout << "Would you like to play again (y/n)? ";
std::cin >> answer;
} while (answer != 'y' && answer != 'n');
 
return (answer == 'y');
}
 
int main()
{
srand(static_cast<unsigned int>(time(0))); 
rand(); 
 
const int guesses = 9; 

do 
{
int number = get_random_number(1, 100); 
 
std::cout << "Would you like to play a game?  I'm thinking of a number.  I'll give you " << guesses << " tries to guess what it is.\n";
		
bool won = play_game(guesses, number);
if (won)
std::cout << "Congratulations!  You win!\n";
else
std::cout << "Sorry, but you lose.  The correct answer was " << number << "\n";
 
}
while (play_again());
 
std::cout << "Thank you for playing.\n";
return 0;
}

