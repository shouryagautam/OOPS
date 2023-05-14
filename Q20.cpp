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
      throw "Stack is empty!";
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

  int choice;

  while (true) {
  	cout << endl;
    cout << ":: Stack Menu ::" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Top" << endl;
    cout << "4. Empty" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice :";

    cin >> choice;

    switch (choice) {
      case 1:
        int data;
        cout << "Enter the data to push: ";
        cin >> data;
        stack.push(data);
        break;

      case 2:
        try {
          cout << "Popped element: " << stack.pop() << endl;
        } catch (const char *e) {
          cout << e << endl;
        }
        break;

      case 3:
        try {
          cout << "Top element: " << stack.tops() << endl;
        } catch (const char *e) {
          cout << e << endl;
        }
        break;

      case 4:
        cout << "Empty :" << (stack.empty() ? "True" : "False") << endl;
        break;

      case 5:
        return 0;

      default:
        cout << "Invalid choice!" << endl;
    }
  }

  return 0;
}