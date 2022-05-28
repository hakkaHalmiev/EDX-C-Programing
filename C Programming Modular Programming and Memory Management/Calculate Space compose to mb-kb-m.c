#include <stdio.h>
int calc(int);
int main(void)
{
    char typeOfvariable;
    int num;
    int result=0;
    scanf("%c %d",&typeOfvariable,&num);
    if(typeOfvariable=='i')
    {
        result=num*sizeof(int);
    }
    else if(typeOfvariable=='s')
    {
        result=num*sizeof(short);
    }
    else if(typeOfvariable=='c')
    {
        result=num*sizeof(char);
    }
    else if(typeOfvariable=='d')
    {
        result=num*sizeof(double);
    }
    else
    {
        return 0;
    }
    calc(result);
    return 0;
}
int calc(int x)
{
    if(x>1000000)
    {
        printf("%d  MB and %d KB and %d B",x/1000000,x/1000-1000*(x/1000000),x%1000);
    }
    else if(x>1000)
    {
        printf("%d KB and %d B",x/1000,x%1000);
    }
    else if(x<1000)
    {
        printf("%d B",x);
    }
   
}