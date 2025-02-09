#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;	// 수열의 크기
	cin >> n;

	int* arr = new int[n];	// 동적 할당 (수열)
	int x;	// 구하려는 자연수 x

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;

	int set = 0;	// 만족하는 쌍의 개수
	int* ans = new int[x+1];	// x-arr[i]가 있는지 확인하기 위한 배열 (->배열의 개수는 x+1개여야 함)
								// x가 아니라 x+1인 이유는, 주어진 수열의 값과 x의 값이 같을 때 문제가 생김
								// 즉, 배열은 값-1만큼의 인덱스가 주어지고, 써야하는 인덱스 값은 '값'이어야 하므로
								// 예시로, arr=1,2,3 / x=2 일때 -> ans[2]일때 저장이 불가능
	fill(ans, ans + x + 1, 0);	// 0~x+1 까지 초기화 필요

	int num;	// x-arr[i]를 저장하기 위한 변수

	for (int i = 0; i < n; i++)
	{

		num = x - arr[i];

		if (num < 0)	// 인덱스 값이 마이너스가 될 수 없음에 주의
			continue;

		// 자기 자신의 값과 매칭되는 쌍(ans[x-arr[i]])이 있다면
		if (ans[num] > 0)
			set++;

		// 자기 자신의 값에 해당하는 쌍 배열의 인덱스 증가
		ans[arr[i]]++;
	}

	cout << set;

	delete[] arr;
	delete[] ans;

}