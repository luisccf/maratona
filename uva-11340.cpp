#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int n_letters;
		cin >> n_letters;
		map<char, int> letters;
		while (n_letters--) {
			char ch;
			int x;
			cin >> ch >> x;
			letters[ch] = x;
		}
		map<char, int>::iterator it;
		int n_sentences;
		cin >> n_sentences;
		string sentence;
		int value = 0;
		getchar();
		while (n_sentences--) {
			getline(cin, sentence);
			for (int i = 0; i < sentence.size(); i++) {
				if (letters[sentence[i]]) {
					value += letters[sentence[i]];
				}
			}
		}
		printf("%.2lf$\n", double(value/100.0));
	}
	return 0;
}