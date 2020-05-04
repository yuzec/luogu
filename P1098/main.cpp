#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int p1,p2,p3,lena,i,j,k=1;
    char a[100],ans[10000],start,end;
    cin>>p1>>p2>>p3;
    cin>>a;
    lena=strlen(a);
    ans[0]=a[0];
    for(i=1;i<lena-1;++i) {
        if(a[i]=='-'&&(a[i-1]>='a'&&a[i-1]<='z'&&a[i+1]>='a'&&a[i+1]<='z'&&a[i-1]<a[i+1]
                    ||a[i-1]>='0'&&a[i-1]<='9'&&a[i+1]>='0'&&a[i+1]<='9'&&a[i-1]<a[i+1])) {
            if(p3==1) {
                start=a[i-1]+1;
                end=a[i+1];
                if(p1==2&&start>'9') {
                    start+='A'-'a';
                    end+='A'-'a';
                }
                for(;start<end;++start)
                    for(j=0;j<p2;++j)
                        if(p1==3)
                            ans[k++]='*';
                        else
                            ans[k++]=start;
            }
            else {
                start=a[i+1]-1;
                end=a[i-1];
                if(p1==2&&end>'9') {
                    start+='A'-'a';
                    end+='A'-'a';
                }
                for(;start>end;--start)
                    for(j=0;j<p2;++j)
                        if(p1==3)
                            ans[k++]='*';
                        else
                            ans[k++]=start;
            }
        }
        else
            ans[k++]=a[i];
    }
    ans[k++]=a[lena-1];
    for(i=0;i<k;++i)
        cout<<ans[i];
    cout<<endl;
    return 0;
}
