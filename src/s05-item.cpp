#include <iostream>
#include <string>

class Creature
{
protected:
	std::string name;
	

public:
	int health;
	void info(std::string creature_name, int creature_health) { name = creature_name; health = creature_health; }
	virtual std::string to_string() { return name + " " + std::to_string(health) + "HP"; }
};
class Item 
{
public:
	int your_streng = 1;
	int your_healing = 0;
	virtual void use_on(Creature &something) { something.health = something.health; };
	virtual int streng() { return your_streng; };
};

class Weapon : public Item
{
public:
	void use_on(Creature &something) { something.health = something.health - your_streng; }
};

class Potion : public Item
{
public:
	void use_on(Creature& something) { something.health = something.health + your_healing; }
};
class Sword : public Weapon
{
public:
	int streng() { return your_streng = 30; }
};

class Axe : public Weapon
{
public:
	int streng() { return your_streng = 40; }
};

class Bow : public Weapon
{
public:
	int streng() { return your_streng = 35; }
};

class Health_potion : public Potion
{
public:
	int number_of_potions = 1;
	int healing() 
	{
		if (number_of_potions >= 1)
		{
			return your_healing = 10;
		}
		else
			return your_healing = 0;
	}
};

void choose_weapon(Creature& something)
{
	std::cout << "Choose weapon(write number):\n" << "1.Sword\n" << "2.Axe\n" << "3.Bow\n";
	int number;
	std::cin >> number;

	if (number == 1)
	{
		Sword sword;
		sword.streng();
		sword.use_on(something);
		std::cout << something.to_string() << "\n";
	}
	else if (number == 2)
	{
		Axe axe;
		axe.streng();
		axe.use_on(something);
		std::cout << something.to_string() << "\n";
	}
	else if (number == 3)
	{
		Bow bow;
		bow.streng();
		bow.use_on(something);
		std::cout << something.to_string() << "\n";
	}
	
	else
	{
		std::cout << "error\n";
	}

}


int main()
{
	Creature something;
	something.info("Zombie", 100);
	std::cout << something.to_string() << "\n";
	choose_weapon(something);
	
	std::cout << "Monster used the potion\n";
	Health_potion potion;
	potion.healing();
	potion.use_on(something);
	std::cout << something.to_string() << "\n";
	--potion.number_of_potions;
	
	std::cout << "Monster wants to use the potion again\n";
	potion.healing();
	potion.use_on(something);
	std::cout << something.to_string() << "\n";
	std::cout << "Hmm... it didn't work\n";
	
	return 0;

}
