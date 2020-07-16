#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double a,b,c,p,area;
    scanf("%lf%lf%lf",&a,&b,&c);
    p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1f\n",area);
    return 0;
}
