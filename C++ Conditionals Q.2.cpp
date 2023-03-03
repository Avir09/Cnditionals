#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	cout<<"Enter a number:"<<a<<endl;
	if(a<0)
	{
	 a=a*(-1);
    }
	cout<<"The absolute value is:"<<a<<endl;
	return 0;
}
