#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    labs:
    cin>>a>>b>>c;
    if((0<a<1001)&&(0<b<1001)&&(0<c<1001)){cout<<a+b+c;}
    else{goto labs;};
    return 0;
}
