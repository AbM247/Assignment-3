#pragma once
#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename Type>
struct Node{
Node(Type x):data(x),next(NULL){}
Type data;
Node* next;
};

template <typename Type>
class queue{
    public:
    Node<Type>* front;
    Node<Type>* rear;
    queue(){front = rear = NULL;}

    void push(Type x);//Adds object to rear
    void pop();//Removes first object
    void frontE();//Returns first object
    void size();//Returns size
    void empty();//Tells if queue is emoty 
    void moveTR();//Moves first object to rear

};

template <typename Type>
int linearSearch(vector<Type>& items, Type& target, size_t pos_last);

void insertion_sort(std::list <int> &num);