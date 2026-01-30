#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Employee
{
protected:
    string firstName;
    char initial;
    string lastName;

public:
    Employee(string f, char i, string l)
        : firstName(f), initial(i), lastName(l) {}

    virtual ~Employee() {}

    string getFullName() const
    {
        return firstName + " " + initial + ". " + lastName;
    }

    // Pure virtual function
    virtual double getSalary() const = 0;
};

// Derived class: SalaryEmployee
class SalaryEmployee : public Employee
{
private:
    double monthlySalary;

public:
    SalaryEmployee(string f, char i, string l, double salary)
        : Employee(f, i, l), monthlySalary(salary) {}

    ~SalaryEmployee() {}

    double getSalary() const override
    {
        return monthlySalary;
    }
};

// Derived class: HourlyEmployee
class HourlyEmployee : public Employee
{
private:
    double hoursWorked;
    double ratePerHour;

public:
    HourlyEmployee(string f, char i, string l,
                   double hours, double rate)
        : Employee(f, i, l),
          hoursWorked(hours),
          ratePerHour(rate) {}

    ~HourlyEmployee() {}

    double getSalary() const override
    {
        return hoursWorked * ratePerHour;
    }
};

// Application / Test file
int main()
{
    Employee *e1 = new SalaryEmployee("John", 'K', "Doe", 50000);
    Employee *e2 = new HourlyEmployee("Mary", 'A', "Smith", 160, 300);

    cout << e1->getFullName()
         << " earns: " << e1->getSalary() << endl;

    cout << e2->getFullName()
         << " earns: " << e2->getSalary() << endl;

    delete e1;
    delete e2;

    return 0;
}
