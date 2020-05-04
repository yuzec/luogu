#include <iostream>
#include <cstring>
using namespace std;

struct node {
    string name;
    int endTermScore;
    int classScore;
    char isCadre;
    char isWestern;
    int paperNum;
    int scholarship;
}student[100];

int main() {
    int n,i,idx=0,sum=0;
    cin>>n;
    for(i=0;i<n;++i)
        cin>>student[i].name>>student[i].endTermScore
            >>student[i].classScore>>student[i].isCadre
            >>student[i].isWestern>>student[i].paperNum;
    for(i=0;i<n;++i) {
        if(student[i].endTermScore>80&&student[i].paperNum>=1)
            student[i].scholarship+=8000;
        if(student[i].endTermScore>85&&student[i].classScore>80)
            student[i].scholarship+=4000;
        if(student[i].endTermScore>90)
            student[i].scholarship+=2000;
        if(student[i].endTermScore>85&&student[i].isWestern=='Y')
            student[i].scholarship+=1000;
        if(student[i].classScore>80&&student[i].isCadre=='Y')
            student[i].scholarship+=850;
        if(student[idx].scholarship<student[i].scholarship)
            idx=i;
        sum+=student[i].scholarship;
    }
    cout<<student[idx].name<<'\n'<<student[idx].scholarship<<'\n'<<sum<<endl;
    return 0;
}
