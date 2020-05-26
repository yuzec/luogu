#include <iostream>
using namespace std;
#define ll long long
#define MAXN 500000

int n,iDatas[MAXN],iBuffer[MAXN];

ll MergeReverse(int iLow, int iMid, int iHigh) {
    int i=iLow,j=iMid+1,k=iLow;
    ll iCrossPairs=0;
    while((i<=iMid)&&(j<=iHigh)) {
        if(iDatas[i]<=iDatas[j])
            iBuffer[k++]=iDatas[i++];
        else {
            iCrossPairs+=iMid-i+1;
            iBuffer[k++]=iDatas[j++];
        }
    }
    if(i<=iMid)
        for(int ii=i;ii<=iMid;ii++)
            iBuffer[k++]=iDatas[ii];
    else
        for(int jj=j;jj<=iHigh;jj++)
            iBuffer[k++]=iDatas[jj];
    return iCrossPairs;
}

ll reverseOrderPairs(int iLow, int iHigh) {
    if(iLow==iHigh)
        return 0;
    int iMid=(iLow+iHigh)/2;
    ll C1,C2,C3;
    C1=reverseOrderPairs(iLow,iMid);
    C2=reverseOrderPairs(iMid+1,iHigh);
    C3=MergeReverse(iLow,iMid,iHigh);
    for(int i=iLow;i<=iHigh;i++)
        iDatas[i]=iBuffer[i];
    return C1+C2+C3;
}

int main() {
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>iDatas[i];
    cout<<reverseOrderPairs(0,n-1)<<endl;
    return 0;
}
