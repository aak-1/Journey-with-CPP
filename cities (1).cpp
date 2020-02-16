#include <bits/stdc++.h>
using namespace std;
int main()
{
	fstream file;
	string word, t, q, filename;
	filename = "CITIES.txt";
	file.open(filename.c_str());
	while (file >> word)
	{
	    if(word[0]=='A')
		cout << word << endl;
	}

	return 0;
}
