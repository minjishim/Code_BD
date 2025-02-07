#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	string abc = to_string(a * b * c);

	for (auto num : abc)
	{
		arr[num - 48]++;	// 문자이므로 아스키코드 값인 숫자로 처리(48~57)
	}
	
	for (auto a : arr)
	{
		cout << a << '\n';
	}
}