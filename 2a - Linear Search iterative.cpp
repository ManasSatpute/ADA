#include<iostream>
using namespace std;
int LS(int a[],int n,int x) {
	int pos;
	for(int i=0; i<n; i++) {
		if(a[i]==x) {
			pos=i+1;
			return pos;
		}
	}
	return -1;
}
int main()
{
	int a[10],num,n,pos=-1;
	cout<<"Enter the Size of Array - ";
	cin>>n;
	cout<<"Enter Array Elements - ";
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<"Enter the number to be search : ";
	cin>>num;
	pos=LS(a,n,num);
	if(pos==-1)
		cout<<"Number not found.";
	else
		cout<<num<<" found at position "<<pos;
	return 0;
}
