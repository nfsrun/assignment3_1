// Name         : LinkedStack.h
// Modified     : Kevin Tran
// Version      : 1.04 -- Fixed Stack implementation to not keep sizes or create
// max sizes.
// Description  : LinkedStack class implements itself as if it was a LinkedList
// but behaviorally acts as if it was a Stack. It's public methods are there as
// if it was a Stack. It's private variables are similar to those seen in
// LinkedList and Stack. This LinkedStack, like other structures, can be used
// for different types of Object types.

#ifndef ASSIGNMENT3_1_LINKEDSTACK_H
#define ASSIGNMENT3_1_LINKEDSTACK_H

#include <iostream>
using namespace std;

//node definition
template <class T>
struct node{
    T data;
    node<T>* next;
};

//LinkedStack class definition with elements of LinkedList and Stack. Overrides
// the << operator so actual information can be outputted effectively.

template <class T>
class LinkedStack {
private:

    //Utilizes same node system as seen in LinkedList.
    node<T> *top, *bottom;

public:
    LinkedStack(){};
    bool isEmpty();
    int getElementCount();
    void destroy();
    void push(T);
    T pop();
    T printTop();
    template <class U>
    friend ostream& operator<<(ostream&, LinkedStack<U>&);
    virtual ~LinkedStack();
};

//currentSize outputs the number of elements currently in the LinkedStack.
template <class T>
int LinkedStack<T>::getElementCount(){
	node<T> *count=bottom;
	int ret;
	while(count!=NULL){
		ret++;
		count=count->next;
	}
    return ret;
}

//overloaded output operator will print all elements in the stack from the
//bottom(left-most output) to the top(right most output). Warning message will
// pop out in console in case the LinkedStack was empty.
template <class T>
ostream& operator<<(ostream& os, LinkedStack<T>& stack){
    if (stack.getElementCount()!=0){
        node<T> *p = stack.bottom;
        os<<"From the bottom(left) to the top(right): ";
        while (p != stack.top && &p != NULL) {
            os << p->data << " ";
            p = p->next;
        }
        os << p->data;
    }else{
        os << "There is nothing in this current LinkedStack. ";
    }
    return os;
}

//Default (virtual) destructor which calls destroy to destroy the current
//LinkedStack.
template <class T>
LinkedStack<T>::~LinkedStack() {
    destroy();
}

//checks to see if the number of items in the LinkedStack is zero.
template <class T>
bool LinkedStack<T>::isEmpty(){
    return this->bottom==NULL;
}

//push method takes in the item of type T and puts it into the LinkedStack.
//Warning message will pop out in console in case the LinkedStack is already
//full upon attempted adding.
template <class T>
void LinkedStack<T>::push(T data1){

    //if this if statement is valid, then the first node (top), will have its
    //data filled.
    if(isEmpty()){
        this->top = this->bottom = new node<T>;
        this->top->data=data1;

        //else if the LinkedStack is not full at the moment, make another node next
        //to it so new data can be added to the rear.
    }else{
        this->top->next = new node<T>;
		this->top=this->top->next;
        this->top->data=data1;
    }
}

//pop takes out the last element from the LinkedStack and returns it. Warning
//message will pop out in console in case the LinkedStack was empty.
template <class T>
T LinkedStack<T>::pop(){
    //there are two nodes, find will find the last node while findBefore
    //will keep the reference of the node before the lsat node.

    if(!isEmpty()){
        T d = this->top->data;
        if(getElementCount()==1){
            this->bottom->data=NULL;
            this->top=this->bottom;
        }else{
            node<T> *find = this->bottom;
            while (find->next != this->top) {
                find=find->next;
            }
            find->next=NULL;
        }
		return d;
    }else{
        cout<<"LinkedStack is empty. Cannot pop. ";
    }
}

//printTop prints the top element of the LinkedStack (the last in). Warning
//message will pop out in console in case the LinkedStack was empty.
template <class T>
T LinkedStack<T>::printTop(){
    if(!isEmpty()){
        return this->top->data;
    }else{
        cout<<"LinkedStack is empty. Nothing is on the top. ";
    }
}

//destroy method pops everything in the LinkedStack until nothing is left.
template <class T>
void LinkedStack<T>::destroy(){
    while(isEmpty()){
        pop();
    }
}

#endif /* ASSIGNMENT3_1_LINKEDSTACK_H */