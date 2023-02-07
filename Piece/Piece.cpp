#include "./Piece.hpp"
#include <iostream>

std::string Piece::getCell() {
    return this->cell;
}

std::string Piece::getColor() {
    return this->color;
}

bool Piece::isWhite() {
    return this->color == "w";
}

void Piece::setCell(std::string cell) {
    this->cell = cell;
}

bool Piece::isOn(std::string cell) {
    return this->cell == cell;
}

Piece::Piece() {
    std::cout << "Initialization of a piece" << std::endl;
}