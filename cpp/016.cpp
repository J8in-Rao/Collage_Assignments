#include<iostream>
using namespace std;

//creating class
class SI{
	private:
	float principal, rate;
	int time;
	
	public:
		
//contructor
	SI(float p, float r, int t){
		principal = p;
		rate = r;
		time = t;
	}
	
//calculation
	float cal(){
		return (principal*rate*time)/100;
	}
	
	
};

int main(){
//taking input
	float pri, rate;
	int time;
	cout<<"Enter principal ammount: ";
	cin>>pri;
	cout<<"Enter rate of interest: ";
	cin>>rate;
	cout<<"Enter time (in years): ";
	cin>>time;
//creating object
	SI siobject(pri, rate, time);
	cout<<"SI is :"<<siobject.cal();
	
	return 0;
}