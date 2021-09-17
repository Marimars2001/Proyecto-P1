#include "character.hh"
#include <iostream>

Character::Character(std::string name, unsigned int level, std::string typeMedal)
{
    this->name = name;
    this->level = level;
    this->typeMedal = typeMedal;
}

void Character::showCharacter()
{
    std::cout << "Name: " << name <<std::endl;
    std::cout << "Level: " << level <<std::endl;
    std::cout << "Medal: " << typeMedal <<std::endl;
}