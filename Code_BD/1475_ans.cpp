// Authored by : OceanShape
// Co-authored by : BaaaaaaaaaaarkingDog, kiiimiiin
// http://boj.kr/a7a4aa95c4ee446990f868f926993161
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, a[10] = {}, ans = 0;
    cin >> N;

    // �ڸ��� ����
    while (N) {
        a[N % 10]++;
        N /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) continue;
        ans = max(ans, a[i]);
    }
    // (a[6]+a[9])/2�� �ø��� ���� 6, 9�� ���� �ʿ��� ��Ʈ�� ���̹Ƿ� (a[6]+a[9]+1)/2�� ���
    ans = max(ans, (a[6] + a[9] + 1) / 2);
    cout << ans;
}