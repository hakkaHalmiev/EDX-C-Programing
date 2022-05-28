#include <stdio.h>
void meterTofeet(int);
void gramTopound(int);
void celsTofahr(int);
int main(void)

{
    int numberOfconv;
    int i;
    
    char m='m';
    char g='g';
    char c='c';
    
    scanf("%d",&numberOfconv);
    for (int i=0;i<numberOfconv;i++)
    {
        int x;
        char a;
        scanf("%d %c",&x,&a);
        if(m==a)
        {
            meterTofeet(x); 
        }
        else if(g==a)
        {
            gramTopound(x);
        }
        else if(c==a)
        {
            celsTofahr(x);
        }
        else 
        {
            return 0;
        }
    }
    return 0;
    
}
void meterTofeet(int x)
{
    double feet;
    feet=x* 3.2808;
    printf("%.6lf ft\n",feet);
}

void gramTopound(int y)
{
    double pound;
    pound= y*0.002205;
    printf("%.6lf lbs\n",pound);
}
void celsTofahr(int z)
{
    double fahrenheit;
    fahrenheit=(z*1.8)+32;
    printf("%.6lf f\n",fahrenheit);
}

