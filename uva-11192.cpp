#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	scanf("%d", &n);
	while (n) {
		string s;
		cin >> s;
		int group_length = s.size() / n;
		for (int i = 0; i < s.size(); i++) {
			string t = "";
			for (int j = 0; j < group_length; i++, j++) {
				t += s[i];
			}
			i--;
			reverse(t.begin(), t.end());
			cout << t;
		}
		putchar('\n');
		scanf("%d", &n);
	}
	return 0; 
}
