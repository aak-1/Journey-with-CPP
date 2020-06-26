#include <iostream>

using namespace std;

struct node {
  int data;
  node* left;
  node* right;
};
class binarytree {
  node* root;
  public:
    binarytree() {
      root = NULL;
    }
  int isempty() {
    return (root == NULL);
  }
  void insertnode(int Data) {
    node* p = new node;
    node* parent;
    p -> data = Data;
    p -> left = NULL;
    p -> right = NULL;
    if (isempty()) {
      root = p;
    } else {
      node* ptr;
      ptr = root;
      while (ptr != NULL) {
        parent = ptr;
        if (Data > (parent -> data))
          ptr = ptr -> right;
        else
          ptr = ptr -> left;
      }

    if (Data < parent -> data)
      parent -> left = p;
    else
      parent -> right = p;
  }}
  void displaytree(){
      printtree(root);
  }
  void printtree(node* ptr){
      if (ptr!=NULL){
        printtree(ptr->left);
        cout<<" "<< ptr->data <<" ";
        printtree(ptr->right);
      }
  }
};


int main(){
    binarytree b;
    int a;
    label:
    cout<<"enter value";
    cin>>a;
    b.insertnode(a);
    int c;
    cout<<"would you like to enter another value?";
    cin>>c;
    if (c==1){
    goto label;}
    b.displaytree();
    }
