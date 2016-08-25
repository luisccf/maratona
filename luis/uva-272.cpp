#include <iostream>
using namespace std;
int main() {
	string line;
	bool left = true;
	while (getline(cin, line)) {
		for (int i = 0; i < line.size(); i++) {
			if (line[i] == '"') {
				if (left) {
					line[i] = '`';
					line.insert(i+1, "`");
				} else {
					line[i] = '\'';
					line.insert(i+1, "'");
				}
				left = !left;
			}
		}
		cout << line << endl;
	}
	return 0;
}