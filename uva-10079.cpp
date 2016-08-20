#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	while (cin >> n) {
		if (n < 0)
			break;
		long long int slices = 0;
		for (long long int i = 1; i <= n; i++) {
			slices += i;
		}
		printf("%lld\n", ++slices);
	}
	return 0;
}