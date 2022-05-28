#include <stdio.h>
int min(int,int,int);
int main(void)
{
    int numberOfvalues;
    int values;
    int minValues=0;
    int i;
    scanf("%d",&numberOfvalues);
    for(int i=0;i<numberOfvalues;i++)
    {
        scanf("%d",&values);
         minValues=min(values,minValues,i);   
    }
    printf("%d",minValues);
 return 0;   
}
int min(int x,int y,int z)
{
    if(z==0)
    {
        y=x;
        return y;
    }
    else if (x<y)
    {
        y=x;
        return y;
    }
    else if(x>y)
    {
        y=y;
        return y;
    }
    else 
    {
        return 0;
    }
}