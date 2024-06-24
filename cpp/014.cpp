#include<iostream>
using namespace std;

//creating class
class Employee{
	private: 
	int empId;
	float basicSalary,  da, hra, netSalary;
	
	public:
//setter function
	void setId(int id){
		empId = id;
	}
	void setBasicSalary(float sal){
		basicSalary = sal;
	}
//calculation function
	void cal(){
		da = 0.52*basicSalary;
		hra = 0.30*basicSalary;
		netSalary = basicSalary + da + hra;
	}
//display function
	void dis(){
		cout<<"Employee ID: "<<empId<<endl;
		cout<<"Net salary: "<<netSalary;
	}
};

int main(){
	int n;
	cout<<"Enter number of employee: ";
	cin>>n;
	
//array of n Employee object
	Employee employeeobject[n];
	
//Input data for employees
	for(int i = 0; i<n; ++i){
		int id;
		float sal;
		cout<<"Enter data for Employee "<<i+1<<endl;
		cout<<"Employee Id: ";
		cin>>id; 
		cout<<"Employee basic salary: ";
		cin>>sal;
		employeeobject[i].setId(id);
		employeeobject[i].setBasicSalary(sal);
		employeeobject[i].cal();
	}
//display net salary for each employee
		cout<<"Net salary for each Employee:"<<endl;
	for(int i = 0; i<n; ++i){
		cout<<"Employee "<<i+1<<" :";
		employeeobject[i].dis();
		cout<<endl;
	}
	
	return 0;
	
}