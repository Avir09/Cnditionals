#include <iostream>
using namespace std;
int main()
{
	int length;
	cin>>length;
	int breadth;
	cin>>breadth;
	if(length==breadth){
		cout<<"It is square."<<endl;
	}else{
		cout<<"It is a rectangle."<<endl;
	}
	return 0;
}
