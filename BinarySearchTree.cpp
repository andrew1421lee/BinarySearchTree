#include "BinarySearchTree.h"

template <class T>
BinarySearchTree<T>::BinarySearchTree(){
    left = nullptr;
    right = nullptr;
}

template <class T>
BinarySearchTree<T>::~BinarySearchTree(){}

template <class T>
bool del(BST<T>* tree){}

template <class T>
bool delNode(BST<T>* node){}

template <class T>
BST<T>* getParent(BST<T>* node){}

template <class T>
bool BinarySearchTree<T>::insert(const T &value){
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
bool BinarySearchTree<T>::remove(const T &value){
    
}

template <class T>
bool BinarySearchTree<T>::find(const T &value) const{

}

template <class T>
void BinarySearchTree<T>::display() const{

}

template <class T>
BST<T>* BinarySearchTree<T>::getLeft(){

}

template <class T>
BST<T>* BinarySearchTree<T>::getRight(){

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
