#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    cin>>n;
    if (n>=1&&n<=1000){
    int arr [n];
    
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]>=1&&arr[i]<=10000){}else { break;}
    }
    for (int i=0;i<n;i++){
        cout<<arr[n-1-i]<<" ";
    }


    }
    
    return 0;
}
