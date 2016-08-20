#include <bits/stdc++.h>
using namespace std;
int main() {
	map<string, string> dict;
	string s;
	while (getline(cin, s)) {
		int i;
		bool hasSpace = false;
		string t;
		for (i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				hasSpace = true;
				break;
			}
			t += s[i];
		}
		if (!hasSpace) {
			while (cin >> s) {
				if (dict.find(s) != dict.end())
					cout << dict[s] << endl;
				else
					cout << "eh" << endl;
			}	
		}
		string u;
		for (int j = i+1; j < s.size(); j++)
			u += s[j];
		dict[u] = t;
	}
	return 0;
}