/* In a parallel universe, there are not just two charges like positive and negative, but there are  charges represented by   english alphabets.

Charges have a property of killing each other or in other words neutralizing each other if they are of same charge and next to each other.

You are given a string  where each  represents a charge, where .

You need to output  of final string followed by string after which no neutralizing is possible.



// Sample code to perform I/O:
 
#include <iostream>
 
using namespace std;
 
int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include <iostream>
 
using namespace std;
 
int main() {
	int n;
	cin >> n;	
	char s[n];
	cin>>s;
	char t[n];
	int top=0;
	for (int i=0;i<n;i++){
		if (top==0) {
			t[top++]=s[i];}
			else{
				t[top++]=s[i];
				if (t[top-1]==t[top-2]){
					top=top-2;
				}
			}
 
	}
	cout<<top<<endl;
	for (int i=0;i<top;i++){
		cout<<t[i];
	}
}	
