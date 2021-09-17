#pragma once
#include <string>

class Character
{
    private:
        std::string name{};
        unsigned int level{};
        std::string typeMedal{};//Medalla del juego.
    public:
        Character(std::string name, unsigned int level, std::string typeMedal);
        void showCharacter();
};