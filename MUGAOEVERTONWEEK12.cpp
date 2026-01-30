#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class representing a Course
class Course
{
private:
    string courseCode;
    string courseName;
    int credits;

public:
    Course(string code, string name, int c)
        : courseCode(code), courseName(name), credits(c) {}

    string getCourseName() const { return courseName; }
    string getCourseCode() const { return courseCode; }
};

// Class representing a Student
class Student
{
private:
    int studentID;
    string name;
    int year;
    vector<Course *> registeredCourses; // Association: student → courses

public:
    Student(int id, string n, int y) : studentID(id), name(n), year(y) {}

    string getName() const { return name; }

    void registerCourse(Course *c)
    {
        registeredCourses.push_back(c);
        cout << name << " registered for " << c->getCourseName() << endl;
    }

    void showCourses() const
    {
        cout << "Courses for " << name << ":\n";
        for (auto c : registeredCourses)
            cout << "- " << c->getCourseCode() << ": " << c->getCourseName() << endl;
    }
};

// RegistrationSystem class (Dependency on Student and Course)
class RegistrationSystem
{
public:
    void registerStudentInCourse(Student *s, Course *c)
    {
        s->registerCourse(c); // depends on Student and Course
    }
};

// Main function to test the system
int main()
{
    // Create courses
    Course math("MTH101", "Mathematics I", 3);
    Course cs("CS101", "Introduction to Programming", 4);
    Course phy("PHY101", "Physics I", 3);

    // Create students
    Student s1(1001, "Alice", 1);
    Student s2(1002, "Bob", 1);

    // Create registration system
    RegistrationSystem regSys;

    // Register students in courses
    regSys.registerStudentInCourse(&s1, &math);
    regSys.registerStudentInCourse(&s1, &cs);
    regSys.registerStudentInCourse(&s1, &phy);
    regSys.registerStudentInCourse(&s2, &cs);
    regSys.registerStudentInCourse(&s2, &phy);

    cout << "\n";

    // Show registered courses
    s1.showCourses();
    cout << "\n";
    s2.showCourses();

    return 0;
}
