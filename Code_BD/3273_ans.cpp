// Authored by : BaaaaaaaaaaarkingDog
// Co-authored by : -
// http://boj.kr/fc842a288ef843e49e2fe5b6a8bbcf5e
#include <bits/stdc++.h>
using namespace std;

int a[1000001] = {};
// �� �ڿ����� ���� ���θ� �����ϴ� �迭, �Ʒ����� x-a[i]�� 1000000���� ū ��츦 ����ó���ϱ� �Ⱦ �׳� �迭�� �ִ� 200������ ����
bool occur[2000001];
int n, x;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;

    for (int i = 0; i < n; i++) {
        // x-a[i]�� �����ϴ��� Ȯ��
        if (x - a[i] > 0 && occur[x - a[i]]) ans++;
        occur[a[i]] = true;
    }
    cout << ans;
}

/*
�������⵵ O(2000000), �ð����⵵ O(n)�� Ǯ�̰� ����. ���� �Է� ���Ŀ���
x�� a �迭���� ���� �־����ٸ� int a[] �迭�� �ʿ䰡 ������.
*/