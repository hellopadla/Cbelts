#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main() {
    int Q,N;
    map<vector<string>, int> bs;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> N;
        vector<string> stop;
        for (int i = 0; i < N; i++) {
            string l;
            cin >> l;
            stop.push_back(l);
        }
        if (bs.count(stop)) {
            cout << "Already exists for " << bs[stop] << endl;
        }
        else {
            bs[stop];
            int k = bs.size();
            bs[stop] = k;
            cout << "New bus " << bs[stop] << endl;
        }
    }
    return 0;
}
