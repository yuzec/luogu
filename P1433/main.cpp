#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

double x[16],y[16],f[16][1<<16];

double dis(int a, int b) {
    return sqrt(pow(x[a]-x[b],2)+pow(y[a]-y[b],2));
}

int main() {
    int n,s,i,j;
    double ans=-1;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i]>>y[i];
    memset(f,127,sizeof(f));    // double无穷大赋值方式
    for(s=1;s<=(1<<n)-1;++s)
        for(i=1;i<=n;++i) {
            if((s&(1<<(i-1)))==0)   // 第i位为0
                continue;
            if(s==(1<<(i-1))) {
                f[i][s]=0;
                continue;
            }
            for(j=1;j<=n;++j) {
                if((s&(1<<(j-1)))==0||i==j)
                    continue;
                f[i][s]=min(f[i][s],f[j][s-(1<<(i-1))]+dis(i,j));
            }
        }
    for(i=1;i<=n;++i)
        f[i][(1<<n)-1]+=dis(0,i);
    for(i=1;i<=n;++i)
        if(ans==-1||ans>f[i][(1<<n)-1])
            ans=f[i][(1<<n)-1];
    printf("%.2f\n",ans);
    return 0;
}
