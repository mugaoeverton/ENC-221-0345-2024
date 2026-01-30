#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    int serviceYear;
    double salary;

public:
    // Parameterized constructor
    Employee(string n, int a, int s, double sal)
    {
        name = n;
        age = a;
        serviceYear = s;
        salary = sal;
    }

    // Destructor
    ~Employee()
    {
        // Destructor body (empty since no dynamic memory)
    }

    // Accessor (getter) functions
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    int getServiceYear()
    {
        return serviceYear;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee emp("John Doe", 30, 5, 45000.50);

    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Service Years: " << emp.getServiceYear() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    return 0;
}
