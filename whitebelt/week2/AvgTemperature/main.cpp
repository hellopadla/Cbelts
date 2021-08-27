#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int avg = 0;
    cin >> n;
    vector<int> days(n);
    for (int& i : days) {
        cin >> i;
        avg += i;
    }
    avg = avg / n;
    int ss = 0;
    vector<int> index;
    for (int i : days) {
        if (i > avg)
            index.push_back(ss);
        ++ss;
    }

    cout << index.size() << endl;
    for (int k : index) {
        cout << k <<' ';
    }

    return 0;
}
