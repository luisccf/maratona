#include <iostream>
#include <vector>
using namespace std;

int knapsack(int W, vector<int>weights, vector<int>prices) {
	int n = weights.size();
	int L[n+1][W+1];
	for (int i = 0; i <= n; i++) {
		for (int w = 0; w <= W; w++) {
			if (!i || !w) {
				L[i][w] = 0;
			} else if (weights[i-1] <= w) {
			L[i][w] = max(prices[i-1] + L[i-1][w-weights[i-1]],  L[i-1][w]);
			} else {
			L[i][w] = L[i-1][w];
			}
		}
	}
	return L[n][W];
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		vector<int>weights, prices, people;
		int n_objects;
		cin >> n_objects;
		while (n_objects--) {
			int x, y;
			cin >> x >> y;
			prices.push_back(x);
			weights.push_back(y);
		}
		int n_people;
		cin >> n_people;
		int total = 0;
		while (n_people--) {
			int x;
			cin >> x;
			total += knapsack(x, weights, prices);
		}
		cout << total << endl;
	}
	return 0;
}