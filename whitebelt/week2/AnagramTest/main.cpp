#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<char, int> BuildCharCounters(const string& s) {
    map<char, int> q;
    for (const auto& item: s) {
        q[item]++;
    }
    return q;
}

int main() {
    int N;
    string pairs;
    cin >> N;
    string s, k;
    vector<string> result;
    for (int i = 0; i < N; i++) {
        cin >> s >> k;
        if (BuildCharCounters(s) == BuildCharCounters(k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
