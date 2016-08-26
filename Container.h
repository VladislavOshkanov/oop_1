#include <cstddef>
#include <iostream>
using namespace std;

template <class T> class Node {
public:

  Node(){}
  Node ( T el ){
    element = el;
    next = NULL;
  }
  T element;
  Node * next;
};




template <class T> class Container {
public:
  Container (){
    first = NULL;
    last = NULL;
  }

  virtual ~Container (){

  }
  void pushFirst(T element){
    if ((first == NULL)){
      Node<T> * node = new Node<T>(element);
      first = node;
      last = node;
    }
    else {
      Node<T> * node = new Node<T>(element);
      node->next = first;
      first = node;
    }
  }
  void pushLast (T element){
    if ((first == NULL)){
      Node<T> * node = new Node<T>(element);
      first = node;
      last = node;
    }
    else{
        Node<T> * node = new Node<T>(element);
        last->next = node;
        last = node;
    }
  }
  void deleteFirst(){
    if (first == last){
      delete first;
      first = NULL;
      last = NULL;
    }
    else{
      Node<T> * temp = first;
      first = first->next;
      delete temp;
    }
  }
  void deleteLast(){
    if (first == last){
      delete first;
      first = NULL;
      last = NULL;
    }
    else{
      Node<T> * temp = first;
      while (temp->next != last){
        temp = temp->next;
      }
      delete last;
      last = temp;
      last->next = NULL;
    }
  }
  void print(){
    if (first != NULL){
      Node<T> * temp;
      temp = first;
      while (temp != NULL) {
        cout << temp->element << endl;
        temp = temp->next;
      }

    }
  }

private:
  size_t size;
  Node<T> *first, *last;
};
