#ifndef _BinarySearchTree_H_
#define _BinarySearchTree_H_

#include <iostream>

template <class T>
class BinarySearchTree
{
	private:

		T content;
		BinarySearchTree<T>* left;
		BinarySearchTree<T>* right;

		bool checkIfRepeat(BinarySearchTree<T>* tree) const;
		void repopulate();
		void insertTreeHelper(BinarySearchTree<T>* tree);
		void displayHelper() const;

	public:

		BinarySearchTree();
		BinarySearchTree(const T &value);
		~BinarySearchTree();
		bool insert(const T& value);
		bool insert(BinarySearchTree<T>* tree);
		bool remove(const T& value);
		bool find(const T& value) const;
		void display() const;
		BinarySearchTree<T>* getLeft() const;
		BinarySearchTree<T>* getRight() const;
		T getContent() const;
		void setLeft(BinarySearchTree<T>* node);
		void setRight(BinarySearchTree<T>* node);
		void setContent(const T& value);
};

#endif
