all:
	@clear
	@g++ -o Main main.cpp ./Chess/Chess.cpp ./Piece/Piece.cpp 
	@./Main
	@ rm ./Main

build: 
	@g++ -o Main main.cpp ./Chess/Chess.cpp ./Piece/Piece.cpp

run:
	@./Main

clean:
	@ rm ./Main