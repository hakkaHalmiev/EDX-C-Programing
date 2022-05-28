#include <stdio.h>
int sumOfDigits(int);
int main(void)
{
    int numbers;
    int conseq;
    scanf("%d",&numbers);
    conseq=sumOfDigits(numbers);
    printf("%d",conseq);
    return 0;
    
}
int sumOfDigits(int x)
{
    int result;
    result=x%10;
    if(result==0)
    {
        result=x/10;
        return result;
    }
    else
    {
        result=result+sumOfDigits(x/10);
        return result;
    }
}