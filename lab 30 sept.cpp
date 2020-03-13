#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter the student ID"<<endl;
    cin>>i;
    int j=i/1000000;
    cout << "The year of enrollment is 20"<<j<<endl;
    cout<<"The year of graduation is 20"<<j+4<<endl;
    int k= i-(j*1000000);
    int f= k/1000;
    cout<<"The branch code is "<< f <<endl;

return 0;
}
