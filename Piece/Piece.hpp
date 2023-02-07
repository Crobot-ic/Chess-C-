#include <string>

class Piece {
    private:
        std::string name;
        std::string id;
        std::string cell;
        std::string color;

    public:
        Piece();
        std::string* getCellsBetweenBishop(std::string from, std::string to);
        std::string* getCellsBetweenQueen(std::string from, std::string to);
        std::string* getCellsBetweenRook(std::string from, std::string to);
        std::string getCell();
        std::string getColor();
        bool isOn(std::string cell);
        bool isWhite();
        void setCell(std::string cell);
        void printChessboard();
};