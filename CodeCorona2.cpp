/*Krish is a very naughty kid. If left alone, he creates a lot of chaos. To make things under control, Ankit gave Krish a string to play with.

The string has letters 'a' and 'b'. Ankit directed him to perform some operations on it. On each step, he chooses one of substrings "ab" in the string and replace it with the string "bba". If he has no "ab" as a substring, his task is done. Krish wants to perform the task in the minimum number of steps. But he wants your help. Help him find the minimum number of steps he should perform to complete his task. Print minimum number of steps modulo 

The string "ab" appears as a substring if there is a letter 'b' right after the letter 'a' somewhere in the string.

Input:
The first line contains the string s consisting of letters 'a' and 'b'.


Here,  is the length of the string.

Output:
Print the minimum number of steps modulo .*/

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
 
 
 