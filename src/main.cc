#include <iostream>
#include "player.hh"

int main()
{
    Player* player1{new Player("Mari001", 2, "Bronce", "marimars2001@gmail.com", "Mujer")};
    player1->showPlayer();
    std::cout <<std::endl;
    Player* player2{new Player("ElproXD", 1, "Bronce", "el_pro_XD@gmail.com", "Hombre")};
    player2->showPlayer();
    std::cout <<std::endl;
    Player* player3{new Player("Profechuy", 40, "Diamante", "chuy_elprofe@gmail.com", "Hombre")};
    player3->showPlayer();
    

    std::cin.get();
    return EXIT_SUCCESS;
}