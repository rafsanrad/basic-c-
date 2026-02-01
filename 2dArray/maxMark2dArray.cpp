#include<iostream>
using namespace std;

int main() {
    int mark[5][3];
    int total = 0;
    int maxMark;

 
    cout << "Enter marks of 5 students in 3 subjects:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mark[i][j];
        }
    }

 
    maxMark = mark[0][0]; //assume first mark is max mark

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            total += mark[i][j];
            if (mark[i][j] > maxMark) {
                maxMark = mark[i][j];
            }
        }
    }

    float avg = (float)total / 15;

    cout << "Total Marks of All Students Combined: " << total << endl;
    cout << "Average Marks (All Subjects): " << avg << endl;
    cout << "Highest Mark: " << maxMark << endl;

    return 0;
}