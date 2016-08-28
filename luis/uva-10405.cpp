#include <iostream>
using namespace std;

int lcs(string s, string t) {
	int n = s.size();
	int m = t.size();
	int L[n+1][m+1];
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			L[i][j] = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (!i || !j) {
				L[i][j] = 0;
			} else if (s[i-1] == t[j-1]) {
				L[i][j] = L[i-1][j-1] + 1;
			} else {
				L[i][j] = max(L[i][j-1], L[i-1][j]);
			}
		}
	}
	return L[n][m];
}

int main()
{
	string s, t;
	while(getline(cin, s)) {
		getline(cin, t);
		cout << lcs(s, t) << endl;
	}
	return 0;
}