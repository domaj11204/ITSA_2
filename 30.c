#include <stdio.h>

int main(){
    char all[12][20] ={
        {"Aquarius"},//1/21~2/18
        {"Pisces"},//2/19~3/20
        {"Aries"},//3/21~4/20
        
        {"Taurus"},//4/21~5/21
        {"Gemini"},//5/22~6/21
        {"Cancer"},//6/22~7/22
        {"Leo"},//7/23~8/23
        {"Virgo"},//8/24~9/23
        {"Libra"},//9/24~10/23
        {"Scorpio"},//10/24~11/22
        {"Sagittarius"},//11/23~12/21
        {"Capricorn"}//12/22~1/20
    };
    int m,d;
    scanf("%d%d",&m,&d);
    if((m == 1 && d >= 21 )|| (m == 2 && d <= 18) )
        printf("%s\n",all[0]);
    else if(m == 2 || (m == 3 && d <= 20))
        printf("%s\n",all[1]);
    else if(m == 3 || (m == 4 && d <= 20))
        printf("%s\n",all[2]);
    else if(m == 4 || (m == 5 && d <= 21))
        printf("%s\n",all[3]);
    else if(m == 5 || (m == 6 && d <= 21))
        printf("%s\n",all[4]);
    else if(m == 6 || (m == 7 && d <= 22))
        printf("%s\n",all[5]);
    else if(m == 7 || (m == 8 && d <= 23))
        printf("%s\n",all[6]);
    else if(m == 8 || (m == 9 && d <= 23))
        printf("%s\n",all[7]);
    else if(m == 9 || (m == 10 && d <= 30))
        printf("%s\n",all[8]);
    else if(m == 10 || (m == 11 && d <=220))
        printf("%s\n",all[9]);
    else if(m == 11 || (m == 12 && d <=120))
        printf("%s\n",all[10]);
    else if(m == 12 || (m == 1 && d <= 20))
        printf("%s\n",all[11]);
    
}
