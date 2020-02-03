#include<iostream>
using namespace std;
int mul(int x,int y)
{
	if (x==0 || y==0)	return 0;
	else if(x==1)	return y;
	else {
		if(y==1)	return x;
		else
			return x+mul(x,y-1);
	}
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
