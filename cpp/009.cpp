#include<iostream>
using namespace std;
//Make a struct of employee
struct employee{
	int empId;
	float basicSalary;
	float hra;
	float da;
float grossSal(){
	return basicSalary+da+hra;
}
};


int main(){
	//making object name of emp in struct employee
	employee emp;
	//taking details of emp
	cout<<"Enter employee ID: ";cin>>emp.empId;
	cout<<"Enter employee Basic salary: ";cin>>emp.basicSalary;
	cout<<"Enter employee HRA: ";cin>>emp.hra;
	cout<<"Enter employee DA: ";cin>>emp.da;
	
	//display employee details and gross salary
	cout << "\nEmployee Details:" << endl;
    cout << "ID: " << emp.empId << endl;
    cout << "Basic Salary: " << emp.basicSalary << endl;
    cout << "HRA: " << emp.hra << endl;
    cout << "DA: " << emp.da << endl;
	cout<<"Gross Salary: "<<emp.grossSal();
	
	return 0;
	
}