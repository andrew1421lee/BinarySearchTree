#include "BinarySearchTree.h"
using namespace std;

template <class T>
BinarySearchTree<T>::BinarySearchTree(const T &value){
    content = value;
    left = nullptr;
    right = nullptr;
}

template <class T>
BinarySearchTree<T>::BinarySearchTree(BST<T>* head, BST<T>* left, BST<T>* right){
    //TODO
}

template <class T>
BinarySearchTree<T>::~BinarySearchTree(){
    //TODO
}
/*
template <class Y>
bool del(BST<Y>* tree){
    //
}*/

template <class Y>
bool delNode(BST<Y>* node){
    //TODO
}
/*
template <class Y>
BST<Y>* getParent(BST<Y>* node){
    //
}*/

template <class T>
bool BinarySearchTree<T>::insert(const T &value){
    //TODO
    if(value < this.content){
        //go left
        if(!left){
            left = new BST<T>(value);
            return true;
        }else{
            left->insert(value);
        }
    }else if(value > this.content){
        //go right
        if(!right){
            right = new BST<T>(value);
            return true;
        }else{
            right->insert(value);
        }
    }
    return false;
}

template <class T>
bool BinarySearchTree<T>::insert(BST<T>* tree){
    //TODO
}

template <class T>
bool BinarySearchTree<T>::remove(const T &value){
    //TODO
}

template <class T>
bool BinarySearchTree<T>::find(const T &value) const{
    //TODO
}

template <class T>
void BinarySearchTree<T>::display() const{
        if (!left) left->display();
        cout << content << end;
        if (!right) right->display();
}

template <class T>
BST<T>* BinarySearchTree<T>::getLeft(){
    return this.left;
}

template <class T>
BST<T>* BinarySearchTree<T>::getRight(){
    return this.right;
}

template <class T>
void BinarySearchTree<T>::setLeft(BST<T>* node){
    this.left = node;
}

template <class T>
void BinarySearchTree<T>::setRight(BST<T>* node){
    this.right = node;
}

template <class T>
void BinarySearchTree<T>::setContent(const T &value){
    this.content = value;
}
