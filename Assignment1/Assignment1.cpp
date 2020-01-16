// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
    std::string name;/*std::string variable for characters name*/
    std::string species;/*std::string variable for characters species*/
    std::string specialAbility;/*std::string variable for characters special ability*/

    
    int age; /*int variable for characters age*/
    int health;/*int variable for characters health*/
    int magic;/*int variable for characters magic*/
    int strength;/*int variable for characters strength*/
    int speed;/*int variable for characters speed*/
    int intelligence;/*int variable for characters intelligence*/

    std::cout << "Enter your characters name" << std::endl;/*Asking for the characters name*/
    std::cin >> name;/*assigning the users input to the variable 'name'*/

    std::cout << "Enter your characters species" << std::endl;/*Asking for the characters species*/
    std::cin >> species;/*assigning the users input to the variable 'species'*/

    std::cout << "Enter your characters special ability" << std::endl;/*Asking for the characters special ability*/
    std::cin >> specialAbility;/*assigning the users input to the variable 'specialAbility'*/

    std::cout << "Enter your characters age" << std::endl;/*Asking for the characters age*/
    std::cin >> age;/*assigning the users input to the variable 'age'*/

    std::cout << "Enter your characters health" << std::endl;/*Asking for the characters health*/
    std::cin >> health;/*assigning the users input to the variable 'health'*/

    std::cout << "Enter your characters magic" << std::endl;/*Asking for the characters magic*/
    std::cin >> magic;/*assigning the users input to the variable 'magic'*/

    std::cout << "Enter your characters strength" << std::endl;/*Asking for the characters strength*/
    std::cin >> strength;/*assigning the users input to the variable 'strength'*/

    std::cout << "Enter your characters speed" << std::endl;/*Asking for the characters speed*/
    std::cin >> speed;/*assigning the users input to the variable 'speed'*/

    std::cout << "Enter your characters intelligence" << std::endl;/*Asking for the characters intelligence*/
    std::cin >> intelligence;/*assigning the users input to the variable 'intelligence'*/
    
    std::cout << name << " is of the " << species  << " species."<< std::endl;/*Telling the user the characters species*/
    std::cout << name << " has the special ability: " << specialAbility <<"."<< std::endl;/*Telling the user the characters special ability*/
    std::cout << name << " is " << age << " years old." << std::endl;/*Telling the user the characters age*/
    std::cout << name << " has " << health << " starting health."<< std::endl;/*Telling the user the characters health*/
    std::cout << name << " has " << magic << " starting magic." << std::endl;/*Telling the user the characters magic*/
    std::cout << name << " has " << strength << " strength." << std::endl;/*Telling the user the characters strength*/
    std::cout << name << " has " << speed << " speed."<< std::endl;/*Telling the user the characters speed*/
    std::cout << name << " has " << intelligence <<" intelligence."<< std::endl;/*Telling the user the characters intelligence*/

}
