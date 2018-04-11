#include <iostream>
#include <string>
#include <time.h>
#include <random>
int main(){
	int numChoice;
	int Secret;
	int falures = 0;
	bool win;
	do{
		srand(time(NULL));
		Secret = rand() % 100 + 1;
		std::cout << "Please input a number between 1 - 100 >>" << std::endl;
		std::cin >> numChoice;
		if (numChoice < Secret){
			std::cout << "your too low try again loser" << std::endl;
			falures++;
			win = true;
		}
		else if (numChoice > Secret){
			std::cout << "your too high try again loser" << std::endl;
			falures++;
			win = true;
		}
		else{
			win = false;
		}

	} while (win = true);
	std::cout << " you are correct the secret number was " << Secret << "it took you " << falures << " tries" << std::endl;
	system("pause");
	return 0;
}