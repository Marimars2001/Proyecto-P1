#pragma once
#include <string>
#include "character.hh"

class Player : public Character
{
    private:
        std::string emailPlayer{};
        std::string gender{};
    public:
        Player(std::string name, unsigned int level, std::string typeMedal, std::string emailPlayer,std::string gender);
        void showPlayer();
};