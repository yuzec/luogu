#include <iostream>
#include <cstring>
#include <queue>
#include <map>
using namespace std;

int n;
string a,b,orginal[6],translated[6];
struct node{
    string str;
    int step;
}ans;
queue<node> q;
map<string,int> m;

node bfs(string a) {
    int i,pos;
    node s,t;
    s.str=a;
    s.step=0;
    q.push(s);
    while(!q.empty()) {
        s=q.front(),q.pop();
        if(s.str==b||s.step>10)
            break;
        if(m[s.str]==1)
            continue;
        for(i=0,pos=-1;i<n-1;++i) {
            while((pos=s.str.find(orginal[i],pos+1))!=string::npos) {
                t=s;
                t.str.replace(pos,orginal[i].length(),translated[i]);
                t.step=s.step+1;
                q.push(t);
            }
        }
        m[s.str]=1;
    }
    return s;
}

int main() {
    cin>>a>>b;
    while(cin>>orginal[n]>>translated[n++]);
    ans=bfs(a);
    if(ans.step<=10&&ans.str==b)
        cout<<ans.step<<endl;
    else
        cout<<"NO ANSWER!"<<endl;
    return 0;
}
