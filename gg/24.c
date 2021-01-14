#include <stdio.h>
#include <stdlib.h>
int main(){
    double r;
    int n;
    double p;
    scanf("%lf %d %lf",&r,&n,&p);
    long double ans = p + p*r;
        //printf("%Lf\n",ans);
    for(int i = 0 ; i < n-1 ; i++){
        //printf("%Lf\n",ans);
        ans = p + ans + (ans+p)*r;
    }

    printf("%ld\n",ans);
}
