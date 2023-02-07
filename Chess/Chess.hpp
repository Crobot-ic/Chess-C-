#include <string>
#include "../Piece/Piece.hpp"
#include <array>

class Chess {
    private:
        std::array<Piece, 32> listPiece;
        int numberTurn;
        char status;

    public:
        Chess();
        void reset();
        void movePiece(std::string move);
        bool isEnded();
        bool isAChessPos();
        bool isAStalemat();
        bool isADraw();
        bool isAMatPos();
};