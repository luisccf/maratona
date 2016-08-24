#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int counter = 0;
	int k;
	cin >> k;
	while (k) {
		if (counter++ > 0) {
			cout << endl;
		}
		vector<int> numbers;
		int i = k;
		while (i--) {
			int x;
			cin >> x;
			numbers.push_back(x);
		}
		for (int a = 0; a < k - 5; a++) 
			for (int b = a+1; b < k - 4; b++)
				for (int c = b+1; c < k - 3; c++)
					for (int d = c+1; d < k - 2; d++)
						for (int e = d+1; e < k - 1; e++)
							for (int f = e+1; f < k; f++)
								printf("%d %d %d %d %d %d\n", numbers[a], numbers[b], numbers[c], numbers[d], numbers[e], numbers[f]);
		cin >> k;
	}
	return 0;
}