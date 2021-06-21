/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 23.04.2021
*/

#include <iostream>
#include <iomanip>
#include "Animal.h"

int main(){
	int choice;
/*Objects of concrete classes*/	
	Duck duck;
	Dog dog;
	Cat cat;
	
	for(;;){
	
	std::cout << "1. Duck\n";
	std::cout << "2. Dog\n";
	std::cout << "3. Cat\n";
	std::cout << "0. Exit\n";
	
	std::cout << "\nEnter your choice (0-3): ";
	
	std::cin >> choice;
	
		switch (choice){
			case 1:{
				std::cout << "\n" << std::setfill('-') << std::setw(40) << "\n";
				
				std::cout << "\nDucks say: " << duck.Speak() << "\n";
				std::cout << "Ducks have: " << duck.numberOfLegs() << " legs\n";
				
				std::cout << "\nEnter 0 to exit: ";
				std::cin >> choice;
				
				std::cout << "\n" << std::setfill('-') << std::setw(40) << "\n\n";
				break;
			}
			
			case 2:{
				std::cout << "\n" << std::setfill('-') << std::setw(40) << "\n";
				
				std::cout << "\nDogs say: " << dog.Speak() << "\n";
				std::cout << "Dogs have: " << dog.numberOfLegs() << " legs\n";
				
				std::cout << "\nEnter 0 to exit: ";
				std::cin >> choice;
				
				std::cout << "\n" << std::setfill('-') << std::setw(40) << "\n\n";
				break;
			}
			
			case 3:{
				std::cout << "\n" << std::setfill('-') << std::setw(40) << "\n";
				
				std::cout << "\nCats say: " << cat.Speak() << "\n";
				std::cout << "Cats have: " << cat.numberOfLegs() << " legs\n";
				
				std::cout << "\nEnter 0 to exit: ";
				std::cin >> choice;
				
				std::cout << "\n" << std::setfill('-') << std::setw(40) << "\n\n";
				break;
			}
			
			case 0:{
				std::cout << "\nGoodbye!\n";
				exit(0);
				break;
			}
			
			default:{
				std::cout << "\n" << std::setfill('-') << std::setw(40) << "\n\n";
				
				std::cout << "Wrong input!\n";
				
				std::cout << "\n" << std::setfill('-') << std::setw(40) << "\n\n";
				break;
			}
		}
	}
		
	system("pause");
	return 0;
}









