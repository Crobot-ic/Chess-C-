#include <iostream>
#include "Chess/Chess.hpp"

int main() {
    Chess game;
    std::cout << game.isEnded() << std::endl;

    return 0;
}