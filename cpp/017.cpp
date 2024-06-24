#include<iostream>
using namespace std;
class Employee{
	protected:
		double salary;
	public:
		Employee(double sal): salary(sal){}
		virtual double calculateGrossSalary()const = 0;
		
		// double getSalary() const {
		// 	return salary;
		// }   
};
class Salesman:public Employee{
	private:
	int productQuantity;
	double sellingPrice;
	double totalSale;
	public:
		Salesman(double sal, int pq, double sp, double ts):Employee(sal),productQuantity(pq),sellingPrice(sp),totalSale(ts){}
		
		double calculateGrossSalary()const override{
			return salary +(0.2*totalSale);
		}
	
};
class Manager: public Employee{
	private:
		double totalSellingBySalesmen;
	public:
		Manager(double sal, double ts):Employee(sal),totalSellingBySalesmen(ts){}
		double calculateGrossSalary()const {
			return salary+(0.1*totalSellingBySalesmen);
		}
};

int main(){
 // Create salesman objects
    Salesman salesman1(2000, 100, 10, 5000);
    Salesman salesman2(2500, 150, 15, 7000);
    Salesman salesman3(3000, 200, 20, 10000);

    // Calculate gross salary for each salesman
    cout << "Salesman 1 Gross Salary: " << salesman1.calculateGrossSalary() << endl;
    cout << "Salesman 2 Gross Salary: " << salesman2.calculateGrossSalary() << endl;
    cout << "Salesman 3 Gross Salary: " << salesman3.calculateGrossSalary() << endl;

    // Total selling by all salesmen
    double totalSelling = salesman1.calculateGrossSalary() + salesman2.calculateGrossSalary() + salesman3.calculateGrossSalary();

    // Create manager object
    Manager manager(5000, totalSelling);

    // Calculate gross salary for manager
    cout << "Manager Gross Salary: " << manager.calculateGrossSalary() << endl;
	
	return 0;
}