#include<iostream>
using namespace std;

//creating class
class Student{
	private:
	int rollNum;
	float marks[3];
	float total, percentage;
	
	public:
//taking input
	void read(){
			cout<<"Enter Roll number: ";
			cin>>rollNum;
			cout<<"Enter Marks 1: ";
			cin>>marks[0];
			cout<<"Enter Marks 2: ";
			cin>>marks[1];
			cout<<"Enter Marks 3: ";
			cin>>marks[2];
		}
		
//calculating total and percentage
		void cal(){
			total = 0;
			for(int i= 0; i<3; ++i){
				total += marks[i];
			}
			percentage = (total/300)*100;
		}
//displaying marks
		void dis(){
			cout<<"Total marks: "<<total<<endl;
			cout<<"Percentage: "<<percentage;
		}
};

int main(){
	Student obj1;
	obj1.read();
	obj1.cal();
	obj1.dis();
	return 0;
	
}