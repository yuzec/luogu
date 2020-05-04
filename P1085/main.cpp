#include <iostream>
using namespace std;

int main() {
	int i,idx=0;
	int a[7],b[7],c[7];
	for(i=0;i<7;++i)
		cin>>a[i]>>b[i];
	for(i=0;i<7;++i)
		c[i]=a[i]+b[i];
	for(i=1;i<7;++i)
		if(c[idx]<c[i])
			idx=i;
	if(c[idx]>8)
		cout<<idx+1<<endl;
	else
		cout<<0<<endl;
	return 0;
}
