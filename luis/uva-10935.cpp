#include <iostream>
#include <vector>
using namespace std;

int main() { 
    int n;
    cin >> n;
    while (n) {
        vector<int> cards;
        for (int i = n; i >= 1; i--) {
            cards.push_back(i);
        }
        vector<int> trash;
        while(cards.size() >= 2) {
            int lastCard = cards[cards.size()-1];
            cards.erase(cards.begin() + cards.size() - 1);
            trash.push_back(lastCard);
            int topCard = cards[cards.size()-1];
            cards.erase(cards.begin() + cards.size() - 1);
            cards.insert(cards.begin(), topCard);
        }
        cout << "Discarded cards:";
        if (trash.size() > 0)
            cout << ' ';
        for (int i = 0; i < trash.size(); i++) {
            cout << trash[i];
            if (i != trash.size() - 1)
                cout << ", ";
        }
        cout << endl << "Remaining card: " << cards[0] << endl;
        cin >> n;
    } 
    return 0;
}
