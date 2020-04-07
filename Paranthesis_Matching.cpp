#include <iostream>

#include "Paranthesis_Matching_header.h"

using namespace std;

int main() {
  char *str="()(())";
  int s = sizeof(str) / sizeof(char);
  stackarray a(s);
  if (a.IsBalanced(str)) cout << "is balanced ";
  else cout << "isn't balanced";
}
