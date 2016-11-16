#include "BinarySearchTree.h"
using namespace std;


//There is no default constructor for BST. It must have a value;
//Sets content to value, and left, right to nullptr.
template <class T>
BinarySearchTree<T>::BinarySearchTree(const T &value){
    content = value;
    left = nullptr;
    right = nullptr;
}

//For the F U T U R E
template <class T>
BinarySearchTree<T>::BinarySearchTree(BST<T>* head, BST<T>* left, BST<T>* right){
    //TODO
}

//Delete function for BST
//THANKS NAXUAL
template <class T>
BinarySearchTree<T>::~BinarySearchTree(){
    //TODO
}

//Delete function for an entire tree
template <class Y>
bool delNode(BST<Y>* node){
    //TODO
}

//Inserts a new value into the tree recursively.
//Checks value's place in comparison to content, and places appropriately.
template <class T>
bool BinarySearchTree<T>::insert(const T &value){
    //
    if(value < content){
        //go left
        if(!left){
            left = new BST<T>(value);
            return true;
        }else{
            left->insert(value);
        }
    }else if(value > content){
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

//Combine a tree into the tree.
//F U T U R E
template <class T>
bool BinarySearchTree<T>::insert(BST<T>* tree){
    //TODO
}

//Removes a value from the tree.
template <class T>
bool BinarySearchTree<T>::remove(const T &value){
    //TODO
}

//Finds if a value exists on the tree.
template <class T>
bool BinarySearchTree<T>::find(const T &value) const{
    //TODO
}

//Prints out the current tree.
template <class T>
void BinarySearchTree<T>::display() const{
        if (left) left->display();
        cout << content << endl;
        if (right) right->display();
}

//Returns the pointer to the left BST.
template <class T>
BST<T>* BinarySearchTree<T>::getLeft(){
    return left;
}

//Returns the pointer to the right BST.
template <class T>
BST<T>* BinarySearchTree<T>::getRight(){
    return right;
}

//Sets the left pointer to node.
template <class T>
void BinarySearchTree<T>::setLeft(BST<T>* node){
    left = node;
}

//Sets the right pointer to node.
template <class T>
void BinarySearchTree<T>::setRight(BST<T>* node){
    right = node;
}

//Sets the content of the current node to value.
template <class T>
void BinarySearchTree<T>::setContent(const T &value){
    content = value;
}

template class BinarySearchTree<int>;
