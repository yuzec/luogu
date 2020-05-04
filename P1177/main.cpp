#include <iostream>
using namespace std;

void quickSort(int a[], int l, int r) {
    int i=l,j=r,mid=a[(l+r)/2];
    while(i<=j) {
        while(a[i]<mid) i++;
        while(a[j]>mid) --j;
        if(i<=j)
            swap(a[i++],a[j--]);
    }
    if(l<j) quickSort(a,l,j);
    if(i<r) quickSort(a,i,r);
}

int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    quickSort(a,0,n-1);
    for(i=0;i<n;++i)
        cout<<a[i]<<' ';
    cout<<endl;
    return 0;
}
