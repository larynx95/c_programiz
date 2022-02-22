/**********************************************************
 * Programiz: https://www.programiz.com
 *
 * data structures: stack
 * https://www.programiz.com/dsa/stack
 * https://dpdpwl.tistory.com/68
 **********************************************************/

#include <iostream>
#define MAXVALUE 2

using namespace std;

template <class T>
class Stack {
 public:
  int top;
  int size;
  T *values;

  Stack() {
    size = MAXVALUE;
    values = new T[size];
    top = -1;
  }
  ~Stack() { delete[] values; }

  void push(T value) {
    if (!isFull())
      values[++top] = value;
    else
      cout << "Stack is Full" << endl;
  }

  void pop() {
    if (!empty())
      top--;
    else
      cout << "Stack is Empty" << endl;
  }

  T Top() {
    if (!empty())
      return values[top];
    else
      return NULL;
  }

  bool empty() {
    if (top < 0)
      return true;
    else
      return false;
  }

  bool isFull() {
    if (top + 1 == size)
      return true;
    else
      return false;
  }
};

template <typename T>
ostream &operator<<(ostream &out, Stack<T> &st) {
  T *temp = st.values;
  out << "┌───┐" << endl;
  for (int i = st.top; i >= 0; i--) {
    out << "  " << temp[i] << endl;
  }
  out << "└───┘" << endl;
  return out;
}

int main() {
  Stack<int> st;
  cout << "Stack push" << endl;
  st.push(1);
  cout << st << endl;
  cout << "Stack push" << endl;
  st.push(3);
  cout << st << endl;
  cout << "Stack push" << endl;
  st.push(5);
  cout << st << endl;
  cout << "Stack Top : " << st.Top() << endl << endl;
  cout << "Stack pop" << endl;
  st.pop();
  cout << st << endl;
  st.pop();
  cout << "Stack pop" << endl;
  cout << st << endl;
  st.pop();
  cout << "Stack pop" << endl;
  cout << st << endl;
}