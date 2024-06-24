#include <iostream>

using namespace std;
class Myclass{
	int data;
	public:
		void getData(){
			cout<<"Enter number: ";
			cin>>data;
		}
		friend void displayData(Myclass);
};

void displayData(Myclass obj){
	cout<<"Number is: "<<obj.data;
}

int main() {
	Myclass num;
	num.getData();
	displayData(num);
    return 0;
}

