#include<bits/stdc++.h>
using namespace std;
struct job {
	char id;
	int dead,profit;
};
bool cmp(job a,job b) {
	return a.profit>b.profit;
}
void jobsch(job a[],int n) {
	sort(a.a+n.cmp);
	int result[n];
	bool slot[n];
	for(i=0;i<n;i++)
		slot[i]=false;
	for(i=0i<n;i++) {
		for(j=min(n.a[i].dead)-1;j>=0;j--) {
			if(slot[j]==false) {
				result[j]=i;
				slot[j]=true;
				break;
			}
		}
	}
	for(i=0;i<n;i++) {
		if(slot[i])
			cout<<a[result[i]].id<<" ";
	}
}
int main() {
	a[]=
}

