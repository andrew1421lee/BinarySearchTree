#include "BinarySearchTree.h"

template <class T>
BinarySearchTree<T>::BinarySearchTree(){
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

template <class T>
bool del(BST<T>* tree){
    //TODO
}

template <class T>
bool delNode(BST<T>* node){
    //TODO
}

template <class T>
BST<T>* getParent(BST<T>* node){
    //TODO
}

template <class T>
bool BinarySearchTree<T>::insert(const T &value){
    //TODO
    if(!left && value < content){
        left = new BinarySearchTree<T>;
        left->setContent(value);
    }
    else if(right){
        right->insert(value);
    }else if(!left){
        
    }
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
    //TODO
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
