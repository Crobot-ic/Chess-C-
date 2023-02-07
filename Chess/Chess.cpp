#include "Chess.hpp"
#include <iostream>

// Private methods

//Public methods
Chess::Chess() {
    this->reset();
}

void Chess::reset() {
    std::cout << "We will initialize a new game";
}

void Chess::movePiece(std::string move) {
    
}

bool Chess::isEnded() {
    return true;
}