#include<iostream>
using namespace std;
int mul(int x,int y)
{
	int t;
	if (x==0 || y==0)	return 0;
	else if(x==1)	return y;
	else {
		if(y==1)	return x;
		t=mul(x,y/2);
		t+=t;
		if(y%2==1)
			t+=x;
	}
	return t;
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
