#include <iostream>
using namespace std;

int main() {
	int i,money=0,temp,deposit=0;
	int cost[12];
	for(i=0;i<12;++i)
		cin>>cost[i];
	for(i=0;i<12;++i)
	{
        temp=money+300-cost[i];
        if(temp<0){
            cout<<-i-1<<endl;
            return 0;
        }
        else {
            money=temp%100;
            deposit+=temp-money;
        }
	}
    cout<<deposit*1.2+money<<endl;
	return 0;
}
