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
        //template <class Y> friend bool del(Y value);
        template <class Y> friend bool delNode(BST<Y>* node);
        //template <class Y> friend BST<T>* getParent(BST<Y>* node);

    public:
        BinarySearchTree(const T &value);
        BinarySearchTree(BST<T>* head, BST<T>* left, BST<T>* right);
        ~BinarySearchTree();
        bool insert(const T &value);
        bool insert(BST<T>* tree);
        bool remove(const T &value);
        bool find(const T &value) const;
        BST<T>* findTree(const T &value);
        void display() const;
        BST<T>* getLeft();
        BST<T>* getRight();
        void setLeft(BST<T>* node);
        void setRight(BST<T>* node);
        void setContent(const T &value);

};

#endif
