#include <iostream>
#include <vector>

using namespace std;

void Next_Month(int& index, const vector<int>& day, vector<vector<string>>& task_for_day) {
    index++;
    if (index > 11)
        index = 0;
    vector<vector<string>> New_Month = task_for_day;
    int a = task_for_day.size();
    int b = day[index];
    task_for_day.resize(b);
    const int m = b - 1;
    if (a > b) {
        for (b; a > b; b++) {
            task_for_day[m].insert(end(task_for_day[m]), begin(New_Month[b]), end(New_Month[b]));
        }
    }
    New_Month.clear();
}

void Task_Display(int& day, const vector<vector<string>>& task_for_day) {
    cout << task_for_day[day - 1].size();
    if (task_for_day[day - 1].size() == 0) {
        cout << endl;
        return;
    }
    for (auto i : task_for_day[day - 1]) {
        cout << ' ' << i;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    vector<int> day_in_year = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<vector<string>> task_for_day;
    int ind_mon = 0;
    task_for_day.resize(day_in_year[ind_mon]);
    for (int i = 0; i < Q; i++) {
        string command;
        int day;
        string task;
        cin >> command;
        if (command == "NEXT") {
            Next_Month(ind_mon, day_in_year, task_for_day);
        } else if (command == "DUMP") {
            cin >> day;
            Task_Display(day, task_for_day);
        } else if (command == "ADD") {
            cin >> day >> task;
            task_for_day[day - 1].push_back(task);
        }
    }
    return 0;
}
