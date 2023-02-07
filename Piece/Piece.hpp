#include <string>

class Piece {
    private:
        std::string name;
        std::string id;
        std::string cell;

    public:
        std::string* getCellsBetweenBishop(std::string from, std::string to);
        std::string* getCellsBetweenQueen(std::string from, std::string to);
        std::string* getCellsBetweenRook(std::string from, std::string to);
        void setCell(std::string cell);
        void isOn(std::string cell);
        std::string getCell();

        Piece();
};