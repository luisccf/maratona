#include <bits/stdc++.h>
using namespace std;

int main() {
	set<string> words;
	string word;
	while (cin >> word) {
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		string new_word = "";
		for (int i = 0; i < word.size(); i++) {
			if (isalpha(word[i]))
				new_word += word[i];
			else if (word[i] == '-' || word[i] == '\'') {
				if (new_word != "--" && new_word != "-" && new_word.size() > 0) {
					words.insert(new_word);
					new_word = "";
				}
			} 
		}
		if (new_word.size() > 0)
			words.insert(new_word);
	}
	set<string>::iterator it;
	for (it = words.begin(); it != words.end(); ++it)
 		cout << *it << endl;
	return 0;
}