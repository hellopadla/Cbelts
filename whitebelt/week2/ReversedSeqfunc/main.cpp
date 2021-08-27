#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) {
    vector<int> result = v;
    int size = v.size();
    for (auto r : v){
        result[size - 1] = r;
        size --;
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 5, 3, 4, 2};
    vector<int> nums = Reversed(numbers);
    for(auto w : nums)
        cout << w << ' ';
    return 0;
}


