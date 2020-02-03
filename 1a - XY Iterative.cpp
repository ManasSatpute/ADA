#include<iostream>
using namespace std;
int mul(int x,int y)
{
	int sum=0;
	if (x==0 || y==0)	return 0;
	else if(x==1)	return y;
	else {
		for (int i=1;i<=y;i++)
			sum+=x;
	}
	return sum;
}
int main()
{
	int x,y,m;
	cout<<"Enter 2 numbers - ";
	cin>>x>>y;
	m=mul(x,y);
	cout<<"Product is "<<m;
	return 0;
}
