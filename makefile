FLAGS = -std=c++11

all:	BST

BST:	BinarySearchTree.o Driver.o
	g++ $(FLAGS) BinarySearchTree.o Driver.o -o BST

BinarySearchTree.o:	BinarySearchTree.cpp
	g++ $(FLAGS) -c BinarySearchTree.cpp

Driver.o:	Driver.cpp
	g++ $(FLAGS) -c Driver.cpp

clean:
	rm -f -v *.o BST
