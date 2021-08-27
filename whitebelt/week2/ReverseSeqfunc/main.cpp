#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v) {
    vector<int> c = v;
    int size = v.size();
    for (auto r : c){
        v[size - 1] = r;
        size --;
    }

}

int main() {
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    for(auto w : numbers)
        cout << w << ' ';
    return 0;
}


