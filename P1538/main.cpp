#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int k,p,q,i,j;
    string s,m[10]={"-|| ||-","  |  | ","- |-| -",
    "- |- |-"," ||- | ",    "-| - |-","-| -||-",
    "- |  | ","-||-||-","-||- |-"};
    cin>>k>>s;
    for(p=0;p<7;++p){
        if(p==2||p==5) continue;
        if(p%3==0){
            for(i=0;i<s.size();++i){
                cout<<' ';
                for(j=0;j<k;++j){
                    cout<<m[s[i]-48][p];
                }
                cout<<"  ";
            }
            cout<<endl;        
        }else{
            for(q=0;q<k;++q){
                for(i=0;i<s.size();++i){
                    cout<<m[s[i]-48][p];
                    for(j=0;j<k;++j){
                        cout<<' ';
                    }
                    cout<<m[s[i]-48][p+1]<<' ';
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
