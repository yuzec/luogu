#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int a,b,c=0;
    char x;
    cin>>x;
    while(x!='@') {
        switch(x) {
            case '+': {a=s.top(),s.pop();
                          b=s.top(),s.pop();
                          s.push(b+a);break;}
            case '-': {a=s.top(),s.pop();
                          b=s.top(),s.pop();
                          s.push(b-a);break;}
            case '*': {a=s.top(),s.pop();
                          b=s.top(),s.pop();
                          s.push(b*a);break;}
            case '/': {a=s.top(),s.pop();
                          b=s.top(),s.pop();
                          s.push(b/a);break;}
            case '.': {s.push(c);c=0;break;}
            default: {c=x-'0'+c*10;break;}
        }
        cin>>x;
    }
    cout<<s.top()<<endl;
    return 0;
}
