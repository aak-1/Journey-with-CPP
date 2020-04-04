#ifndef PARANTHESIS_MATCHING_HEADER_H_INCLUDED
#define PARANTHESIS_MATCHING_HEADER_H_INCLUDED

#include <iostream>

using namespace std;
class stackarray {
  public:
  int n;
  char * arr;
  int top;
  int e;
  char pop() {
    if (!(top == -1)) {
      char el = arr[top--];
      return el;
    }
  };
  int push(char key) {
    if (top < e - 1) {
      arr[++top] = key;
    } else
      cout << "stack overflow" << endl;
  };
  int IsEmpty() {
    if (top == -1) return 0;
    else return -1;
  };
  int IsBalanced(char * str) {
    for (int i = 0; str[i] != '\0'; i++) {
      if (str[i] == '(')
        push(str[i]);
      else if (str[i] == ')') {
        if (top == -1)
          return 0;
        pop();
      }
    }
    if (top == -1)
      return 1;
    else
      return 0;
  }
  stackarray(int m) {
    arr = new char[m];
    top = -1;
    e = m;
  }

};

#endif // PARANTHESIS_MATCHING_HEADER_H_INCLUDED
