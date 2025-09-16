#include <iostream>

using namespace std;

int main()
{
	int aatc = 0;
	// °è»ê½Ä : + - * / %
	int HP = 100;
	int Mosnteratk = 20;
	int DEFENCE = 10; 
	int damage = HP - DEFENCE;
	int hp = hp - damage;
	cout << HP;

		if (hp <= 0)
			cout << "Game Over" << endl;

	return 0;
}