.default: all

all: clean compile run

clean:
	rm -rf qwirkle *.o *.dSYM

compile:
	g++ -Werror -std=c++14 -g qwirkle.cpp GameBoard.cpp GameState.cpp Hand.cpp TileBag.cpp Players.cpp Player.cpp Menu.cpp LinkedList.cpp Node.cpp Tile.cpp -o qwirkle

debug:
	g++ -Wall -Werror -std=c++14 -g qwirkle.cpp GameBoard.cpp GameState.cpp Hand.cpp TileBag.cpp Players.cpp Player.cpp Menu.cpp LinkedList.cpp Node.cpp Tile.cpp -o qwirkle

deps:
	cmake -S . -B build

run:
	./qwirkle

test:
	cmake --build build && ctest --test-dir build --output-on-failure

