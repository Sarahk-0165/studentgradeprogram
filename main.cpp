#include <iostream>
#include <string>
using namespace std;

int g_cnt;
string names[100];
int scores[100];

// CHANGED: Simplified nested if-else conditions.
void proc() {
    for (int i = 0; i < g_cnt; i++) {
        char grade = scores[i] >= 90 ? 'A' :
                     scores[i] >= 80 ? 'B' :
                     scores[i] >= 70 ? 'C' : 'F';

        cout << names[i] << " got " << grade << endl;
        // CHANGED: Used one cout instead of repeated cout statements.
    }
}

int main() {
    cout << "Enter num of students: ";
    cin >> g_cnt;

    double sum = 0;

    for (int i = 0; i < g_cnt; i++) {
        cout << "Enter name: ";
        cin >> names[i];

        cout << "Enter score: ";
        cin >> scores[i];

        sum += scores[i];
        // CHANGED: Calculated sum here and removed the extra loop.
    }

    cout << "Average score is: " << sum / g_cnt << endl;
    cout << "--- Grades ---" << endl;

    proc();
    return 0;
}