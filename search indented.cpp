#include<iostream>

using namespace std;
int binarysearch(int * arra, int start, int ende, int nkey) {
  cout << "in binary" << endl;
  if (start > ende) return -1;
  int mid = ((start + ende) / 2);
  if (nkey == arra[mid]) {
    return mid;
  }
  if (nkey > arra[mid]) {
    binarysearch(arra, mid + 1, ende, nkey);
  }
  if (nkey < arra[mid]) {
    binarysearch(arra, start, mid - 1, nkey);
  }

}
int main() {
  int lol;
  cout << "enter 1 for linear search and 2 for binary search" << endl;
  cin >> lol;
  cout << "enter number of elements" << endl;
  int num;
  cin >> num;
  int arr[num];
  cout << "enter " << num << " sorted numbers " << endl;
  for (int i = 0; i < num; i++) {
    cin >> arr[i];
  }
  //linear search
  switch (lol) {
  case 1:
    {
      cout << "enter key for linear search" << endl;
      int m;
      cin >> m;
      int count = 0;
      for (int i = 0; i < num; i++) {
        if (arr[i] == m) {
          cout << i << endl;
          count = 1;
          break;
        }
      }
      if (count == 0) cout << "-1" << endl;
      break;
    }

    //binary search
  case 2:
    {
      cout << "enter key for binary search " << endl;
      int key;
      cin >> key;
      cout << binarysearch(arr, 0, num-1, key) << endl;
      break;
    }
  }
}
