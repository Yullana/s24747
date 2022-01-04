#include <iostream>
#include <string>

class Person
{
protected:
	std::string name;
public:
	void info(std::string user_name) { name = user_name; }
	virtual std::string to_string() { return name; }
};
class Mr : public Person 
{
public:
	std::string to_string() { return "Mr " + name; } 
};

class Mrs : public Person 
{
public:
	std::string to_string() { return "Mrs " + name; } 
};

class King : public Person 
{
public:
	std::string to_string() { return "King " + name; } 
};

class Queen : public Person 
{
public:
	std::string to_string() { return "Queen " + name; } 
};

class Greeting
{
public:
	virtual void greet(std::string user) { std::cout << "Hi " << user << "\n"; }
	
};

class Hello : public Greeting
{
public:
	void greet(std::string user) { std::cout << "Hello " << user << "\n"; }
};

class Good_evening : public Greeting
{
public:
	void greet(std::string user) { std::cout << "Good evening " << user << "\n"; }
};

class Farewell : public Greeting
{
public:
	void greet(std::string user) { std::cout << "Farewell " << user << "\n"; }
};

std::string who_is_it(Person &person)
{
	return person.to_string();

}
void choose_title(std::string i)
{
	std::cout << "Choose title(write number):\n" << "1.Mr\n" << "2.Mrs\n" << "3.King\n" << "4.Queen\n" << "5. I don't have one\n";
	int number;
	std::cin >> number;

	if (number == 1)
	{
		Mr x;
		x.info(i);
		std::string user = who_is_it(x);
		Good_evening good_evening;
		good_evening.greet(user);
	}
	else if (number == 2)
	{
		Mrs x;
		x.info(i);
		std::string user = who_is_it(x);
		Good_evening good_evening;
		good_evening.greet(user);
	}
	else if (number == 3)
	{
		King x;
		x.info(i);
		std::string user = who_is_it(x);
		Farewell farewell;
		farewell.greet(user);
	}
	else if (number == 4)
	{
		Queen x;
		x.info(i);
		std::string user = who_is_it(x);
		Farewell farewell;
		farewell.greet(user);
	}
	else if (number == 5)
	{
		Person x;
		x.info(i);
		std::string user = who_is_it(x);
		Hello hello;
		hello.greet(user);
	}
	else
	{
		std::cout << "error\n";
	}

}

int main()
{

	std::cout << "Write your name: ";
	std::string i;
	std::cin >> i;
	choose_title(i);

	return 0;
}
