#include <stdio.h>
int main(void)
{
    int input_number;
    int i;
    int num;
    char typeOfcode;
    int result=0;
    scanf("%d",&input_number);
    for(int i=0;i<input_number;i++)
    {
        scanf("%d %c",&num, &typeOfcode);
        if(typeOfcode=='i')
        {
            result=(num*sizeof(int));
        
        }
        else if(typeOfcode=='c')
        {
         result=result+(num*sizeof(char));
        }
        else if(typeOfcode=='d')
        {
           result=result+(num*sizeof(double));
        }
        else
        {
            
            printf("Invalid tracking code type");
            return 0;
        }
        
    }
    printf("%d bytes",result);
    return 0;
}