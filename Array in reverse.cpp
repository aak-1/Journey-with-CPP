/*Given the size and the elements of array A, print all the elements in reverse order.

Input:
First line of input contains, N - size of the array.
Following N lines, each contains one integer, i{th} element of the array i.e. A[i].

Output:
Print all the elements of the array in reverse order, each element in a new line.




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
	int num;
	cin >> num;	
	int a[num];
	for (int i=0; i<num; i++){
		cin>>a[i];
	}
	for (int i=(num-1); i>=0; i--){
		cout<< a[i]<<endl;
	}
}