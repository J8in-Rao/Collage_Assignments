#include<iostream>
using namespace std;

//creating class
class Circle{
	private:
		double radius;
		const double pi;
		
	public:
//constructor have the same name as class (here Circle)
//They dont have return type not even void
// constructorName(perameters){} or constructorName(perameters):initialization list{}
		Circle():radius(0),pi(3.14159){}
		void setRad(double r){
			radius = r;
		}
		float circum(){
			return 2*pi*radius;
		}
		
};

int main(){
	double rad;
	cout<<"Enter radius: ";
	cin>>rad;
	
//creating object
	Circle cirobj;
	cirobj.setRad(rad);
	
//calculate and display circumference
	cout<<"Circumference is: "<<cirobj.circum()<<endl;

	return 0;
	
}