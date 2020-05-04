#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> a;
    int temp;
    while(1) {
        cin>>temp;
        if(temp==0)
            break;
        a.push(temp);
    }
    while(!a.empty())
        cout<<a.top()<<' ',a.pop();
    cout<<endl;
    return 0;
}
