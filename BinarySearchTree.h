#ifndef _BinarySearchTree_H_
#define _BinarySearchTree_H_

#include <iostream>
#include <string>
#include <sys/time.h>
#define BST BinarySearchTree

template <class T>
class BinarySearchTree{
    private:
        T content;
        BST<T>* left;
        BST<T>* right;
    public:
        BinarySearchTree();
        ~BinarySearchTree();
        bool insert(const T &value);
        bool remove(const T &value);
        bool find(const T &value) const;
        void display() const;

        BST<T>* getLeft();
        BST<T>* getRight();
        void setLeft();
        void setRight();
};

#endif
