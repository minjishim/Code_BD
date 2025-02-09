#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;	// ������ ũ��
	cin >> n;

	int* arr = new int[n];	// ���� �Ҵ� (����)
	int x;	// ���Ϸ��� �ڿ��� x

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;

	int set = 0;	// �����ϴ� ���� ����
	int* ans = new int[x+1];	// x-arr[i]�� �ִ��� Ȯ���ϱ� ���� �迭 (->�迭�� ������ x+1������ ��)
								// x�� �ƴ϶� x+1�� ������, �־��� ������ ���� x�� ���� ���� �� ������ ����
								// ��, �迭�� ��-1��ŭ�� �ε����� �־�����, ����ϴ� �ε��� ���� '��'�̾�� �ϹǷ�
								// ���÷�, arr=1,2,3 / x=2 �϶� -> ans[2]�϶� ������ �Ұ���
	fill(ans, ans + x + 1, 0);	// 0~x+1 ���� �ʱ�ȭ �ʿ�

	int num;	// x-arr[i]�� �����ϱ� ���� ����

	for (int i = 0; i < n; i++)
	{

		num = x - arr[i];

		if (num < 0)	// �ε��� ���� ���̳ʽ��� �� �� ������ ����
			continue;

		// �ڱ� �ڽ��� ���� ��Ī�Ǵ� ��(ans[x-arr[i]])�� �ִٸ�
		if (ans[num] > 0)
			set++;

		// �ڱ� �ڽ��� ���� �ش��ϴ� �� �迭�� �ε��� ����
		ans[arr[i]]++;
	}

	cout << set;

	delete[] arr;
	delete[] ans;

}