// Q10. Classroom Attendance Manager - Friend Class
#include <iostream>
#include <string>
using namespace std;

class AttendanceManager; // forward declaration

class Classroom {
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceCompleted; // true = completed, false = not completed

    friend class AttendanceManager;

public:
    void inputData() {
        cout << "Enter Class Name: ";
        cin.ignore();
        getline(cin, className);
        cout << "Enter Total Students: ";
        cin >> totalStudents;
        presentStudents = 0;
        attendanceCompleted = false;
    }
};

class AttendanceManager {
public:
    void displayInfo(const Classroom &c) {
        cout << "\n----- Classroom Information -----\n";
        cout << "Class Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;
        cout << "Attendance Completed: " << (c.attendanceCompleted ? "Yes" : "No") << endl;
        cout << "-----------------------------------\n";
    }

    void updatePresentStudents(Classroom &c, int present) {
        if (present > c.totalStudents) {
            cout << "Error: Present count cannot exceed total students.\n";
            return;
        }
        c.presentStudents = present;
        cout << "Present students updated to " << present << ".\n";
    }

    void markAttendanceCompleted(Classroom &c) {
        c.attendanceCompleted = true;
        cout << "Attendance for " << c.className << " marked as completed.\n";
    }

    void displayAttendanceStatus(const Classroom &c) {
        cout << "Attendance Status: "
             << (c.attendanceCompleted ? "Completed" : "Not Completed") << endl;
    }

    void displayAbsentStudents(const Classroom &c) {
        int absent = c.totalStudents - c.presentStudents;
        cout << "Absent Students in " << c.className << ": " << absent << endl;
    }
};

int main() {
    Classroom room;
    AttendanceManager am;

    room.inputData();

    int choice, present;
    do {
        cout << "\n----- Classroom Attendance Menu -----\n";
        cout << "1. Display Classroom Info\n";
        cout << "2. Update Present Students\n";
        cout << "3. Mark Attendance Completed\n";
        cout << "4. Display Attendance Status\n";
        cout << "5. Display Absent Students\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: am.displayInfo(room); break;
            case 2:
                cout << "Enter number of present students: ";
                cin >> present;
                am.updatePresentStudents(room, present);
                break;
            case 3: am.markAttendanceCompleted(room); break;
            case 4: am.displayAttendanceStatus(room); break;
            case 5: am.displayAbsentStudents(room); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
