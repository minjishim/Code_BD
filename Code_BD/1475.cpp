#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int arr[9] = {};	// 9 ��� 6 ���, set �߰� �� 6�� 2�� ����
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

			arr[num]--;	// ��Ʈ�� �߰��Ѵٰ� �ص�, �ش� ���ڴ� ����߱� ������ �ٿ������!
		}

		n /= 10;
	}

	cout << set;
}