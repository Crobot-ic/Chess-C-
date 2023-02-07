all:
	@clear
	@g++ -o Main main.cpp ./Chess/Chess.cpp ./Cell/Cell.cpp ./Piece/Piece.cpp ./Utils/Utils.cpp
	@./Main
	@ rm ./Main

build: 
	@g++ -o Main main.cpp ./Chess/Chess.cpp ./Cell/Cell.cpp ./Piece/Piece.cpp./Utils/Utils.cpp

run:
	@./Main

clean:
	@ rm ./Main