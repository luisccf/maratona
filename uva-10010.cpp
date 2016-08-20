#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

int main() {
	int c, test_case = 0;
	cin >> c;
	while (c--) {
		if (test_case++ > 0)
			cout << endl;
		int m, n;
		cin >> m >> n;
		char grid[51][51];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				char ch;
				cin >> ch;
				grid[i][j] = tolower(ch);
			}
		}
		int k;
		cin >> k;
		while (k--) {
			vector<pair<int, int> > coord;
			string word;
			cin >> word;
			for (int i = 0; i < word.size(); i++)
				word[i] = tolower(word[i]);
			char first_ch = word[0];
			// Looking for first letter in grid
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					if (grid[i][j] == first_ch) {
						// Up
						string t;
						for (int x = i, y = 0; x >= 0 && y < word.size(); x--, y++) {
							if (word[y] != grid[x][j]) {
								break;
							}
							t += word[y];
						}
						if (t == word) {
							coord.push_back(make_pair(i, j));
						}

						// Down
						t = "";
						for (int x = i, y = 0; x < m && y < word.size(); x++, y++) {
							if (word[y] != grid[x][j]) {
								break;
							}
							t += word[y];
						}
						if (t == word) {
							coord.push_back(make_pair(i, j));
						}

						// Left
						t = "";
						for (int x = j, y = 0; x >= 0 && y < word.size(); x--, y++) {
							if (word[y] != grid[i][x]) {
								break;
							}
							t += word[y];
						}
						if (t == word) {
							coord.push_back(make_pair(i, j));
						}

						// Right
						t = "";
						for (int x = j, y = 0; x < n && y < word.size(); x++, y++) {
							if (word[y] != grid[i][x]) {
								break;
							}
							t += word[y];
						}
						if (t == word) {
							coord.push_back(make_pair(i, j));
						}

						// Upper left
						t = "";
						for (int w = i, x = j, y = 0; w >= 0 && x >= 0 && y < word.size(); w--, x--, y++) {
							if (word[y] != grid[w][x]) {
								break;
							}
							t += word[y];
						}
						if (t == word) {
							coord.push_back(make_pair(i, j));
						}

						// Upper right
						t = "";
						for (int w = i, x = j, y = 0; w >= 0 && x < n && y < word.size(); w--, x++, y++) {
							if (word[y] != grid[w][x]) {
								break;
							}
							t += word[y];
						}
						if (t == word) {
							coord.push_back(make_pair(i, j));
						}

						// Lower right
						t = "";
						for (int w = i, x = j, y = 0; w < m && x < n && y < word.size(); w++, x++, y++) {
							if (word[y] != grid[w][x]) {
								break;
							}
							t += word[y];
						}
						if (t == word) {
							coord.push_back(make_pair(i, j));
						}

						// Lower left
						t = "";
						for (int w = i, x = j, y = 0; w < m && x >= 0 && y < word.size(); w++, x--, y++) {
							if (word[y] != grid[w][x]) {
								break;
							}
							t += word[y];
						}
						if (t == word) {
							coord.push_back(make_pair(i, j));
						}

					}

				} 
			} // end for

			sort(coord.begin(), coord.end(), cmp);
			printf("%d %d\n", coord[0].first+1, coord[0].second+1);

		}
	}
	return 0;
}