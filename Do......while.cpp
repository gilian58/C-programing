#include<iostream>
using namespace std;
int main()
{
	int i,x,y,sum=0;
	cout<<"enter the starting point"<<endl;
	cin>>x;
	cout<<"enter stoping point"<<endl;		
	cin>>y;
	i=x;
	do{
		cout<<"i"<<endl;
		sum+=i;
		i++;
	}
	while(i<=y);
	cout<<"the sum of numbers between x and y"<<"is"<<sum;
//
return 0;
}
