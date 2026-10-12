#include <iostream>
#include <cstdlib>
using namespace std;

void clearScreen()
{
    system("cls");
}

void showMarks(double marks, int student)
{
    cout << "Student " << student << " marks: " << marks << endl;
}

double enterMarks(int student)
{
    double marks;

    cout << "Enter marks for Student " << student << " (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid marks! Please enter between 0 and 100." << endl;
        return -1;
    }

    cout << "Marks entered successfully!" << endl;
    return marks;
}

void showGrade(double marks, int student)
{
    cout << "Student " << student << " ";
    if (marks < 0 || marks > 100)
    {
        cout << "has no valid marks available." << endl;
    }
    else if (marks >= 90)
    {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F (Fail)" << endl;
    }
}

void checkPassOrFail(double marks, int student)
{
    cout << "Student " << student << " ";
    if (marks < 0 || marks > 100)
    {
        cout << "has no valid marks available." << endl;
    }
    else if (marks >= 50)
    {
        cout << "Result: PASS" << endl;
    }
    else
    {
        cout << "Result: FAIL" << endl;
    }
}

int main()
{
    double marks1 = -1;
    double marks2 = -1;
    int choice;
    int student;

    do
    {
        clearScreen();
        cout << "===== STUDENT MARK & GRADE SYSTEM =====" << endl;
        cout << "1. Enter Marks" << endl;
        cout << "2. Show Marks" << endl;
        cout << "3. Show Grade" << endl;
        cout << "4. Check Pass/Fail" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                clearScreen();
                cout << "Select Student (1 or 2): ";
                cin >> student;

                if (student == 1)
                {
                    double temp = enterMarks(1);
                    if (temp != -1)
                    {
                        marks1 = temp;
                    }
                }
                else if (student == 2)
                {
                    double temp = enterMarks(2);
                    if (temp != -1)
                    {
                        marks2 = temp;
                    }
                }
                else
                {
                    cout << "Invalid student!" << endl;
                }

                cout << endl << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;
            }

            case 2:
            {
                clearScreen();
                showMarks(marks1, 1);
                showMarks(marks2, 2);
                cout << endl << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;
            }

            case 3:
            {
                clearScreen();
                showGrade(marks1, 1);
                showGrade(marks2, 2);
                cout << endl << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;
            }

            case 4:
            {
                clearScreen();
                checkPassOrFail(marks1, 1);
                checkPassOrFail(marks2, 2);
                cout << endl << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;
            }

            case 5:
                clearScreen();
                cout << "Thank you for using the system!" << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
                cout << endl << "Press Enter to continue...";
                cin.ignore();
                cin.get();
        }

    } while (choice != 5);

    return 0;
}