#include <stdio.h>

int main(){
    double r;
    int n;
    double p;
    scanf("%lf%d%lf",&r,&n,&p);
    long double ans = p + p*r;
    for(int i = 0 ; i < n-1 ; i++){
        ans = p + ans + (ans+p)*r;
    }

    printf("%.0Lf\n",ans-0.499);
}