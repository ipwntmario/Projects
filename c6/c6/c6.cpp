// Dylan Travers
// 9/21/2013
// CIT-245: Data Structures and Programming C++
// Chapter 6 Homework - Due 9/22/2013

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Player
{
public:
	void setName(string newName);
	void setPass(string newPass);
	void setExp(int newExp);
	void setInv(string inv0, string inv1, string inv2, string inv3);
	void setXPos(int newXPos);
	void setYPos(int newYPos);
	string getName();
	string getPass();
	int getExp();
	string* getInv();
	int getXPos();
	int getYPos();
private:
	string name;
	string password;
	int exp;
	string inventory[4];
	int xPos;
	int yPos;
};


int main()
{
	Player player1, player2, player3;

	// Create Player 1
	player1.setName("Barnabus");
	player1.setPass("blunderbuss");
	player1.setExp(31415);
	player1.setInv(
			"rusty blunderbuss", 
			"dented armor", 
			"jerry-rigged shank",
			"bindle full of biscuits");
	player1.setXPos(rand() % 1024);
	player1.setYPos(rand() % 1024);

	// Create Player 2
	player2.setName("Xephyria");
	player2.setPass("tomesrus");
	player2.setExp(16180);
	player2.setInv(
			"tome of lost artifacts", 
			"scroll of wind", 
			"stack of parchment",
			"quills and ink");
	player2.setXPos(rand() % 1024);
	player2.setYPos(rand() % 1024);

	// Create Player 3
	player3.setName("Decantos");
	player3.setPass("bardforhire");
	player3.setExp(16180);
	player3.setInv(
			"enchanted lute", 
			"gold baton", 
			"vial of increase confidence",
			"gloves of increase dexterity");
	player3.setXPos(rand() % 1024);
	player3.setYPos(rand() % 1024);

	// Display Player 1
	cout << "Player Info - \n";
	cout << "Name:       " << player1.getName() << "\n";
	cout << "Password:   " << player1.getPass() << "\n";
	cout << "Experience: " << player1.getExp() << "\n";
	cout << "Inventory:  " << *(player1.getInv()) << "\n";
	cout << "            " << *(player1.getInv() + 1) << "\n";
	cout << "            " << *(player1.getInv() + 2) << "\n";
	cout << "            " << *(player1.getInv() + 3) << "\n";
	cout << "Position:   " << player1.getXPos() << ", " << player1.getYPos() << "\n\n";

	// Display Player 2
	cout << "Player Info - \n";
	cout << "Name:       " << player2.getName() << "\n";
	cout << "Password:   " << player2.getPass() << "\n";
	cout << "Experience: " << player2.getExp() << "\n";
	cout << "Inventory:  " << *(player2.getInv()) << "\n";
	cout << "            " << *(player2.getInv() + 1) << "\n";
	cout << "            " << *(player2.getInv() + 2) << "\n";
	cout << "            " << *(player2.getInv() + 3) << "\n";
	cout << "Position:   " << player2.getXPos() << ", " << player2.getYPos() << "\n\n";

	// Display Player 3
	cout << "Player Info - \n";
	cout << "Name:       " << player3.getName() << "\n";
	cout << "Password:   " << player3.getPass() << "\n";
	cout << "Experience: " << player3.getExp() << "\n";
	cout << "Inventory:  " << *(player3.getInv()) << "\n";
	cout << "            " << *(player3.getInv() + 1) << "\n";
	cout << "            " << *(player3.getInv() + 2) << "\n";
	cout << "            " << *(player3.getInv() + 3) << "\n";
	cout << "Position:   " << player3.getXPos() << ", " << player3.getYPos() << "\n\n";

	system("pause");
	return 0;
}


void Player::setName(string newName)
{
	name = newName;
}

void Player::setPass(string newPass)
{
	password = newPass;
}

void Player::setExp(int newExp)
{
	exp = newExp;
}

void Player::setInv(string inv0, string inv1, string inv2, string inv3)
{
	inventory[0] = inv0;
	inventory[1] = inv1;
	inventory[2] = inv2;
	inventory[3] = inv3;
}

void Player::setXPos(int newXPos)
{
	xPos = newXPos;
}

void Player::setYPos(int newYPos)
{
	yPos = newYPos;
}

string Player::getName()
{
	return name;
}

string Player::getPass()
{
	return password;
}

int Player::getExp()
{
	return exp;
}

string* Player::getInv()
{
	return inventory;
}

int Player::getXPos()
{
	return xPos;
}

int Player::getYPos()
{
	return yPos;
}

