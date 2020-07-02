#include <iostream>
using namespace std;

int main() {
    int ans=0;
    char x;
    cin>>x;
    while(x!='@'&&ans>=0) {
        if(x=='(')
            ++ans;
        else if(x==')')
            --ans;
        cin>>x;
    }
    if(ans==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
