#include <string>

class Chess {
    private:


    public:
        void reset();
        void movePiece(std::string move);
        bool isEnded();
        Chess();
};