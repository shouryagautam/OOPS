#include <iostream>

using namespace std;

template <class T>
class Stack {
public:
  Stack() {
    top = nullptr;
  }

  void push(T data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = top;
    top = newNode;
  }

  T pop() {
    if (top == nullptr) {
      throw "Stack is empty!";
    }

    T data = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;

    return data;
  }

  T tops() {
    if (top == nullptr) {
      throw -1;
    }

    return top->data;
  }

  bool empty() {
    return top == nullptr;
  }

private:
  struct Node {
    T data;
    Node *next;
  };

  Node *top;
};

int main() {
  Stack<int> stack;
  try{
 // cout << stack.tops() << endl;

  stack.push(10);
  stack.push(20);
  
  stack.pop();
  stack.pop();
  stack.pop(); 
  } catch(int ex) {
  	cout<<"Error "<<ex;
  	
  } catch(const char* msg){
  	cout<<msg;
  	
  }
  
  return 0;
}