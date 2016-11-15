all: BST

BST: BinarySearchTree.o Driver.o
	g++ BinarySearchTree.o Driver.o -o BST

BinarySearchTree.o: BinarySearchTree.cpp
	g++ -c BinarySearchTree.cpp

Driver.o: Driver.cpp
	g++ -c Driver.cpp

clean:
	rm -v *.o BST
