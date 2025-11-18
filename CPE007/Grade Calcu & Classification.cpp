#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    float grades[5];
    int choice;

    cout << "Enter grades for 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> grades[i];
    }

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Display all grades" << endl;
        cout << "2. Display average grade" << endl;
        cout << "3. Display highest grade" << endl;
        cout << "4. Display lowest grade" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\nAll grades: ";
                for (int i = 0; i < 5; i++) {
                    cout << grades[i] << " ";
                }
                cout << endl;
                break;
            }
            case 2: {
                float sum = 0;
                for (int i = 0; i < 5; i++) {
                    sum += grades[i];
                }
                float average = sum / 5;
                cout << "\nAverage grade: " << average << endl;
                break;
            }
            case 3: {
                float highest = grades[0];
                for (int i = 1; i < 5; i++) {
                    if (grades[i] > highest) {
                        highest = grades[i];
                    }
                }
                cout << "\nHighest grade: " << highest << endl;
                break;
            }
            case 4: {
                float lowest = grades[0];
                for (int i = 1; i < 5; i++) {
                    if (grades[i] < lowest) {
                        lowest = grades[i];
                    }
                }
                cout << "\nLowest grade: " << lowest << endl;
                break;
            }
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
