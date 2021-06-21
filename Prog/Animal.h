/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 23.04.2021
*/

#include <iostream>
#include <string>

class Animal{
	public:
		virtual std::string Speak () = 0;
		
		virtual int numberOfLegs() = 0;
};

class Duck: public Animal{
	public:
		std::string Speak (){
			return "Quack";
		}
		
		int numberOfLegs(){
			return 2;
		}
};

class Dog: public Animal{
	public:
		std::string Speak (){
			return "Woof";
		}
		
		int numberOfLegs(){
			return 4;
		}
};

class Cat: public Animal{
	public:
		std::string Speak (){
			return "Meow";
		}
		
		int numberOfLegs(){
			return 4;
		}
};
