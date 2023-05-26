#include <bits/stdc++.h>
using namespace std;
int C, N, res = 0, maxs = 0;
int A[100];

void ss(int n) {
	for (int i = 0; i <= 1; i++)
	{
		res += A[n]*i;
		if (res <= C) {
			if (res > maxs)
				maxs = res;
			if (n < N)
				ss(n + 1);
		}
		res -= A[n]*i;
	}
}

int main() {
	cin >> C >> N;
	for (int i = 1; i <= N; i++)
		cin >> A[i];
		ss(1);
	cout << maxs;
	return 0;
}
