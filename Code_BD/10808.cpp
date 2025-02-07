#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;

	int arr[26] = {};

	for (int i = 0; i < S.size(); i++)
	{
		arr[int(S[i]) - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}
	
}