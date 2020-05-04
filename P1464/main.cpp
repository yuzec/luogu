#include <iostream>
using namespace std;

int ans[25][25][25]={1};

int w(long int a, long int b, long int c) {
    if(a<=0||b<=0||c<=0)
        return 1;
    if(a>20||b>20||c>20) {
        if(ans[20][20][20]==0)
            ans[20][20][20]=w(20,20,20);
        return ans[20][20][20];
    }
    if(a<b&&b<c) {
        if(ans[a][b][c]!=0)
            return ans[a][b][c];
        if(ans[a][b][c-1]==0)
            ans[a][b][c-1]=w(a,b,c-1);
        if(ans[a][b-1][c-1]==0)
            ans[a][b-1][c-1]=w(a,b-1,c-1);
        if(ans[a][b-1][c]==0)
            ans[a][b-1][c]=w(a,b-1,c);
        ans[a][b][c]=ans[a][b][c-1]+ans[a][b-1][c-1]-ans[a][b-1][c];
        return ans[a][b][c];
    }
    if(ans[a][b][c]!=0)
        return ans[a][b][c];
    if(ans[a-1][b][c]==0)
        ans[a-1][b][c]=w(a-1,b,c);
    if(ans[a-1][b-1][c]==0)
        ans[a-1][b-1][c]=w(a-1,b-1,c);
    if(ans[a-1][b][c-1]==0)
        ans[a-1][b][c-1]=w(a-1,b,c-1);
    if(ans[a-1][b-1][c-1]==0)
        ans[a-1][b-1][c-1]=w(a-1,b-1,c-1);
    ans[a][b][c]=ans[a-1][b][c]+ans[a-1][b-1][c]+ans[a-1][b][c-1]-ans[a-1][b-1][c-1];
    return ans[a][b][c];
}

int main() {
    long int a,b,c;
    while(true) {
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1)
            return 0;
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
    }
    return 0;
}
