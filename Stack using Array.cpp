#include<iostream>
using namespace std;
class stackarray {
  public:
  int n;
  int* arr;
  int top;
  int e;
  int pop() {
    if (!(top == -1)) {
      int el = arr[top--];
      return el;
    }
  };
  int push(int key) {
    if (top < e - 1) {
      arr[++top] = key;
    } else
      cout << "stack overflow " << endl;
  };
  stackarray(int m) {
    arr = new int[m];
    e=m;
    top = -1;
  }

};
int main() {
  cout << "enter number of elements in stack ";
  int num;
  int opt;
  cin >> num;
  stackarray a(num);
  label:
    int option;
      cout << "Enter option   1.push   2.pop "<<endl;
      cin >> option;
      switch (option) {
      case 1:
        cout << "enter key to add to stack ";
        int element;
        cin >> element;
        a.push(element);
        cout << "top is " << a.top << endl;
        //cout << "top element is " << a.arr[a.top] << endl;
        break;
      case 2:
        cout << "popped element is " << a.pop();
        break;
  }
  cout << "would you like to choose from the menu again? 1 for yes, 0 for no ";
  cin >> opt;
  if (opt == 1) {
    goto label;
  } else cout << "Thank you ";
}
