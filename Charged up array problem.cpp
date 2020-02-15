/*
You are given with an array  of size .An element  is said to be charged if its value() is greater than or equal to .  is the total number of subsets of array , that consist of element . 
Total charge value of the array is defined as summation of all charged elements present in the array mod .
Your task is to output the total charge value of the given array .

INPUT FORMAT:

The first line of input contains number of test cases .
The first line of each test case consists of , the size of the array.
Next line contains  space-separated integers corresponding to each element .

OUTPUT FORMAT:

For each test case, output a single number corresponding to total charge value of the given array.


*/


#include<bits/stdc++.h>
#include<math.h>
#define MOD 1000000007
 
using namespace std;
 
 
 
int solve(long long int A[],int N) {
 int sum=0;
   long long int k=pow(2,N-1);
   for(int i=0;i<N;i++)
   {
         if(A[i]>=k)
         {
             sum=sum%MOD+A[i]%MOD;
         }
   }
   return sum%MOD;
}
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        cin.ignore();
        if(N>=64){
            cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
            cout<<"0\n";
            continue;
        }
        long long A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        int out_;
        out_ = solve(A,N);
        cout << out_;
        cout << "\n";
    }
}
