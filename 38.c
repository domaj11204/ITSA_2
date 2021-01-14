#include <stdio.h>

int main(){
    int degree;
    scanf("%d",&degree);
    double S = 0,nS = 0;
    while(degree>700){
        S+=5.63;
        nS+=4.50;
        degree--;
    }
    while(degree>500){
        S+=4.97;
        nS+=4.01;
        degree--;
    }
    while(degree>330){
        S+=4.39;
        nS+=3.61;
        degree--;
    }
    while(degree>120){
        S+=3.02;
        nS+=2.68;
        degree--;
    }
    while(degree>0){
        S+=2.10;
        nS+=2.10;
        degree--;
    }
    cout<<<<fixed<<setprecision(2)<<S<<endl;
    printf("Summer months:%.2f\n",S);
    printf("Non-Summer months:%.2f\n",nS);
    }
