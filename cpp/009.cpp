#include<iostream>
using namespace std;
//Make a struct of employee
struct employee{
	int empId;
	string empName;
	float basicSalary;
	float hra;
	float da;
};

float grossSal(const employee& emp){
	return emp.basicSalary+emp.hra+emp.da;
}

int main(){
	//making object name of emp in struct employee
	employee emp;
	//taking details of emp
	cout<<"Enter employee ID: ";cin>>emp.empId;
	cout<<"Enter employee name: ";cin>>emp.empName;
	cout<<"Enter employee Basic salary: ";cin>>emp.basicSalary;
	cout<<"Enter employee HRA: ";cin>>emp.hra;
	cout<<"Enter employee DA: ";cin>>emp.da;
	
	//display employee details and gross salary
	cout << "\nEmployee Details:" << endl;
    cout << "ID: " << emp.empId << endl;
    cout << "Name: " << emp.empName << endl;
    cout << "Basic Salary: " << emp.basicSalary << endl;
    cout << "HRA: " << emp.hra << endl;
    cout << "DA: " << emp.da << endl;
	cout<<"Gross Salary: "<<grossSal(emp);
	
	return 0;
	
}