#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int arr[9] = {};	// 9 대신 6 사용, set 추가 시 6이 2개 증가
	int num;
	int set = 0;
	while (n > 0) {
		num = n % 10;
		if (num == 9)
			num = 6;
		
		if (arr[num] > 0)
			arr[num]--;
		else
		{
			for (int i = 0; i < 9; i++)
				arr[i]++;
			arr[6]++;
			set++;

			arr[num]--;	// 세트를 추가한다고 해도, 해당 숫자는 사용했기 때문에 줄여줘야함!
		}

		n /= 10;
	}

	cout << set;
}