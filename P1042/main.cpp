#include <iostream>
using namespace std;

char a[62500];
int len,countw,countl;

void game(int n) {
    countw=countl=0;
    for(int i=0;i<len;++i) {
        if(a[i]=='W')
            ++countw;
        else
            ++countl;
        if(countw>=n&&countw-countl>=2||countl>=n&&countl-countw>=2) {
            cout<<countw<<':'<<countl<<endl;
            countw=countl=0;
        }
    }
    cout<<countw<<':'<<countl<<endl;
}

int main() {
    for(len=0;;++len) {
        cin>>a[len];
        if(a[len]=='E')
            break;
    }
    game(11);
    cout<<endl;
    game(21);
    return 0;
}
