#include <iostream>
#include "player.hh"

Player::Player(std::string name, unsigned int level, std::string typeMedal, std::string emailPlayer,std::string gender) : Character(name, level, typeMedal)
{
    this->emailPlayer = emailPlayer;
    this->gender = gender;
}

void Player::showPlayer()
{
    showCharacter();
    std::cout << "Email: " << emailPlayer << std::endl;
    std::cout << "Gender: " << gender << std::endl;
}