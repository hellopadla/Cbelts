#include <iostream>
#include <vector>
using namespace std;

void Worry(int& i, vector<bool>& x) {
    x[i] = true;
}
void Quiet(int& i, vector<bool>& x) {
    x[i] = false;
}
void Come(int i, vector<bool>& x) {
    int s = x.size();
    x.resize(s + i);
}
void Worry_Count(const vector<bool>& x) {
    int k = 0;
    for (int i : x) {
        if (i == 1)
            k++;
    }
    cout << k << endl;
}

int main() {
    int Q;
    cin >> Q;
    vector<bool> queue;
    for (int i = 0; i < Q; i++) {
        string req;
        int num;
        cin >> req;
        if (req == "WORRY_COUNT") {
            Worry_Count(queue);
        } else {
            cin >> num;
            if (req == "WORRY") {
                Worry(num, queue);
            } else if (req == "QUIET") {
                Quiet(num, queue);
            } else if (req == "COME") {
                Come(num, queue);
            }
        }
    }
    return 0;
}
