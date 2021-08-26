#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}
vector<string> PalindromFilter (vector<string> words, int minLenght) {
    vector<string> p;
    for (auto w : words) {
        if ((w.size() >= minLenght) && (IsPalindrom(w))) {
            p.push_back(w);
        }
    }
    return p;
}

