//Enter the year and it will tell what day it was in the 1st January of that year..
#include<stdio.h>
#include<stdlib.h>
int main()
{  
    int yr;
    int c;
    printf("Enter the year:\n");
    scanf("%d",&yr);
    int d=abs(1990-yr);
    d=d%7;
    if(yr>1990)
    {
        for(int i=1990;i<yr;i++)
        {
            if(i%4==0 && i%100==0 || i%400==0)
            d++;
            if(d==7)
            d=0;
        }
    }
    else{
        for(int i=yr;i<1990;i++)
        {
            if(i%4==0 && i%100==0 || i%400==0)
            d--;
            if(d==-1)
            d=6;
        }
    }
    switch (d)
    {
    case 0:
        printf("It is MONDAY!");
        break;
    case 1:
        printf("It is TUESDAY!");
        break;
    case 2:
        printf("It is WEDNUSDAY!");
        break;
    case 3:
        printf("It is THURSDAY!");
        break;
    case 4:
        printf("It is FRIDAY!");
        break;
    case 5:
        printf("It is SATURDAY!");
        break;
    case 6:
        printf("It is SUNDAY!");
        break;
    default:
        printf("ERROR 404");
    }
    return 0;
}