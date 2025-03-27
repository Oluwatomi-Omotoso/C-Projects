#include<iostream>
#include<ctime>
#include<cstdlib>
#include"convo.h"
int main()
{
	int x = time(0);
	srand(x);
	
	
	int health = rand() %100 +1;
	int speed = rand() %health +1;
	int stamina = health;
	
	
	convo(speed,stamina,health);
	
}
