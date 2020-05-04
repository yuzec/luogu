#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int id;
    int chi;
    int math;
    int eng;
    int total;
}stu[301];

bool cmp(node x, node y) {
    if(x.total!=y.total)
        return x.total>y.total;
    if(x.chi!=y.chi)
        return x.chi>y.chi;
    return x.id<y.id;
}

int main() {
    int n,i;
    cin>>n;
    for(i=0;i<n;++i) {
        stu[i].id=i+1;
        cin>>stu[i].chi>>stu[i].math>>stu[i].eng;
        stu[i].total=stu[i].chi+stu[i].math+stu[i].eng;
    }
    sort(stu,stu+n,cmp);
    for(i=0;i<5;++i)
        cout<<stu[i].id<<' '<<stu[i].total<<endl;
    return 0;
}
