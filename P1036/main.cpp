#include <iostream>
#include <cmath>
using namespace std;

int x[20],n,k;

bool isprime(int m){
    if(m==0||m==1)
        return false;
    int len=sqrt(m);
    for(int i=2;i<=len;++i)
        if(m%i==0)
            return false;
    return true;
}

int dfs(int h,int sum,int idx){
    if(h==0)
        return isprime(sum);
    int ans=0;
    for(int i=idx;i<n;++i)
        ans+=dfs(h-1,sum+x[i],i+1);
    return ans;
}

int main(){
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>x[i];
    cout<<dfs(k,0,0)<<endl;
}
