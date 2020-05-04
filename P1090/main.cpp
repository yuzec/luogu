#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
    int n,a,ans=0;
    cin>>n;
    priority_queue<int, vector<int>, greater<int> > q;
    for(int i=0;i<n;++i) {
        cin>>a;
        q.push(a);
    }
    while(q.size()>1) {
        a=q.top();
        q.pop();
        a+=q.top();
        ans+=a;
        q.pop();
        q.push(a);
    }
    cout<<ans<<endl;
    return 0;
}
