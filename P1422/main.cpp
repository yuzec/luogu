#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	double ans;
	if(num<=150)
		ans=num*0.4463;
	else if(num<=400)
		ans=150*0.4463+(num-150)*0.4663;
	else
		ans=150*0.4463+250*0.4663+(num-400)*0.5663;
	ans=int(ans*10+0.5)/10.0;
	cout<<ans<<endl;
	return 0;
}
