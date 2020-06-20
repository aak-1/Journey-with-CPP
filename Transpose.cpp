/*

Given a 2D array A, your task is to convert all rows to columns and columns to rows.

Input:
First line contains 2 space separated integers, N - total rows, M - total columns.
Each of the next N lines will contain M space separated integers.

Output:
Print M lines each containing N space separated integers.



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
	int numr;
	cin >> numr;
	int numc;
	cin >> numc;
	int matrix[numr][numc];
	for (int i = 0; i<numr;i++){
		for (int j=0; j<numc;j++){
			cin>>matrix[i][j];
		}
	}	
	int transpose[numc][numr];
	for (int i = 0; i<numr;i++){
		for (int j=0; j<numc;j++){
			transpose[j][i]=matrix[i][j];
		}
	}
	for (int i = 0; i<numc;i++){
		for (int j=0; j<numr;j++){
			cout<<transpose[i][j]<<" " ;
		}
		cout<<endl;
	}
}
