#include <iostream>
using namespace std;
int main(){
	int SP,CP,amount;
	cin>>SP;
	cout<<"Enter the amount of Selling price:"<<SP<<endl;
	cin>>CP;
	cout<<"Enter the amount of Cost price:"<<CP<<endl;
	if(SP>CP){
		amount=SP-CP;
		cout<<"The profit is:"<<amount<<endl;
	}
	else{
		amount=CP-SP;
		cout<<"The loss is:"<<amount<<endl;
	}
	return 0;
}
