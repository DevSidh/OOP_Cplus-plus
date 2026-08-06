#include <iostream>
using namespace std;

class Teacher {
public:
    int tid;
    int subject;

    void ReadTeacher() {
        cout << "Enter Teacher ID: ";
        while (!(cin >> tid)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter Teacher ID again: ";
        }

        cout << "Enter Subject Code: ";
        while (!(cin >> subject)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter Subject Code again: ";
        }
    }

    void DisplayTeacher() {
        cout << "Teacher ID : " << tid << endl;
        cout << "Subject    : " << subject << endl;
    }
};

class Staff {
public:
    int sid;
    int position;

    void ReadStaff() {
        cout << "Enter Staff ID: ";
        while (!(cin >> sid)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter Staff ID again: ";
        }

        cout << "Enter Position: ";
        while (!(cin >> position)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter Position again: ";
        }
    }

    void DisplayStaff() {
        cout << "Staff ID   : " << sid << endl;
        cout << "Position   : " << position << endl;
    }
};

class Coordinator : public Teacher, public Staff {
public:
    int department;

    void ReadCoordinator() {
        ReadTeacher();
        ReadStaff();

        cout << "Enter Department: ";
        while (!(cin >> department)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter Department again: ";
        }
    }

    void DisplayCoordinator() {
        cout << "\n----- Coordinator Details -----\n";
        DisplayTeacher();
        DisplayStaff();
        cout << "Department : " << department << endl;
    }
};

int main() {
    Coordinator c1, c2;

    cout << "Enter details for Coordinator 1\n";
    c1.ReadCoordinator();

    cout << "\nEnter details for Coordinator 2\n";
    c2.ReadCoordinator();

    cout << "\n========== OUTPUT ==========\n";
    c1.DisplayCoordinator();
    c2.DisplayCoordinator();

    return 0;
}