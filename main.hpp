#include <iostream>
using namespace std;

int writeFile(string filename){
    int N, EmployeeID;
    string EmployeeName, DepartmentName;
    double salary;

    cout << "enter the number of Employees: " << endl;
    cin >> N;
    cout << N << endl;
    for (int i = 0; i < N; i++){
        cout << "Enter Employee ID. name, department, and salary " << endl;
        cin >> EmployeeID >> EmployeeName >> DepartmentName >> salary;
        cout << EmployeeID << "\t" << EmployeeName << "\t" << DepartmentName << "\t" << salary << endl;
    }
return;
}
int readFile(string filename){
    int N, EmployeeID;
    string EmployeeName, DepartmentName;
    double salary;
    double sum, average;
    double totalSalary;

    cin >> N;

    cout << "ID:\t\tName:\tDepartment:\tSalery:" << endl;

    for (int i = 0; i < N; i++){
        cin >> EmployeeID >> EmployeeName >> DepartmentName >> salary;
        cout << "Employee ID: " << EmployeeID << "\t" << "Employee Name: " << EmployeeName << "\t" << "Department Name:  " << DepartmentName << "\t" << "Salary: " << salary << endl;   
        totalSalary += salary;
    }
    average = totalSalary / N;
    cout << "\t\t\t\t\tTotal: " << totalSalary << endl;
    cout << "\t\t\t\t\tAverage: " << average;
return;
}


