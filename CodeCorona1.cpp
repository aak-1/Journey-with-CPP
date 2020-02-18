/*The time for annual photograph of PEC ACM student chapter has come, everyone is pretty excited for this and there are lots of students standing in groups. Parikh wants to mark attendance of all, so asks them to be in a queue according to height-wise.
The students randomly formed a queue, which was not appreciated by the heads, so Parikh selected the minimum number of students whose position had to be changed so that everyone is standing height-wise in the final queue. Output the no of students whose position were shifted by Parikh. You have to   output only the number of students whose position is shifted and not final position. 


Input Format:
The first line contains no of test cases t.
After that there are t testcases consisting of 2 lines each, where first line of test case contains n no of students in queue, second line contains n space separated integers representing height of students.

Output Format:
For each test case output in a separate line the minimum no of students, whose position in queue was shifted.*/

/*
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
#include <cstring>
 
using namespace std;
 
int main() {
	int m=1000000007;
	string s;
	cin >> s;
	int n = s.length();
	char a[n+1];
	strcpy( a , s.c_str() );
	int b = 0;
	int op = 0;
	int j=1;
	for (int i = 0; i<n ; i++){
		if( a[n-1-i] == 'a'){
			op = ((op%m)+(b%m))%m;
			b=((2%m)*(b%m))%m;
		}
		else{
			b += 1;
		}
	}
	cout<<op;
	
}