#include <iostream>
#include <string>
using namespace std;

// Making a Base Class Student which contains two virtual functions for inputting and displaying the student details.
class Student
{
protected:
    string name;
    int age;

public:
    virtual void inputDetails()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    virtual void displayDetails() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// The first derived class Undergraduate, for inputting and later displaying the details of Undergraduate students.
class Undergraduate : public Student
{
private:
    string course;

public:
    void inputDetails() override
    {
        Student::inputDetails();
        cout << "Enter course: ";
        getline(cin, course);
    }

    void displayDetails() const override
    {
        cout << "Undergraduate Student Details" << endl;
        Student::displayDetails();
        cout << "Course: " << course << endl;
        cout << endl;
    }
};

// The first derived class Graduate, for inputting and later displaying the details of Graduate students.
class Graduate : public Student
{
private:
    string researchProject;

public:
    void inputDetails() override
    {
        Student::inputDetails();
        cout << "Enter research project: ";
        getline(cin, researchProject);
    }

    void displayDetails() const override
    {
        cout << "Graduate Student Details" << endl;
        Student::displayDetails();
        cout << "Research Project: " << researchProject << endl;
        cout << endl;
    }
};

int main()
{
    int totalStudents;
    cout << "Enter number of students: ";
    cin >> totalStudents;
    Student *students[totalStudents];

    cout << "Enter details of " << totalStudents << " students:\n";
    for (int i = 0; i < totalStudents; ++i)
    {
        char studentType;
        cout << "Enter student type (U for undergraduate, G for graduate): ";
        cin >> studentType;
        cin.ignore();

        if ((studentType == 'U') || (studentType == 'u'))
        {
            students[i] = new Undergraduate();
        }
        else if ((studentType == 'G') || (studentType == 'g'))
        {
            students[i] = new Graduate();
        }
        else
        {
            cout << "Invalid student type. Skipping student." << endl;
            continue;
        }

        students[i]->inputDetails();
        cout << endl;
    }

    cout << "Student Details:\n";
    for (int i = 0; i < totalStudents; ++i)
    {
        cout << "Student " << i + 1 << ":\n";
        students[i]->displayDetails();
    }

    for (int i = 0; i < totalStudents; ++i)
    {
        delete students[i];
    }

    return 0;
}
