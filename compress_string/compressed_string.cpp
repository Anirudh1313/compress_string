//============================================================================
// Name        : compressed_string.cpp
// Author      : anirudh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string compress_string(string a);

int main() {
	string a, b;
	cout << "Enter your string: ";

	getline(cin, a);


	a = compress_string(a);
	cout << "Compressed word: " << a << endl;
	return 0;
}

string compress_string(string a)
{
	int x = 1;

	for(int i = 0; i < a.length(); i++)
	{

		int j = i+1;
		while(a[i] == a[j])
		{
			if(a[i] == a[j])
				x++;

			j++;
		}

		a.erase((i+1),x-1);

		if(x != 1)
		{
			i++;
			string ins = to_string(x);
			a.insert(i, ins);
			x = 1;
		}
	}

	return a;
}
