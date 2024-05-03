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
		Circle(double r=0.0):radius(r),pi(3.14159){}
		
		float circum(){
			return 2*pi*radius;
		}
        float area(){
            return pi*radius*radius;
        }
		
};

int main(){
	double rad;
	cout<<"Enter radius: ";
	cin>>rad;
	
//creating object
	Circle cirobj(rad);
	
//calculate and display circumference
	cout<<"Circumference is: "<<cirobj.circum()<<endl;
    cout<<"Area is: "<<cirobj.area();

	return 0;
	
}