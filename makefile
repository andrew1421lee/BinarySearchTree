FLAGS=-std=c++11

all: BST

BST: BinarySearchTree.o Driver.o
	g++ BinarySearchTree.o Driver.o $(FLAGS) -o BST

BinarySearchTree.o: BinarySearchTree.cpp
	g++ $(FLAGS) -c BinarySearchTree.cpp

Driver.o: Driver.cpp
	g++ $(FLAGS) -c Driver.cpp

clean:
	rm -v *.o BST
