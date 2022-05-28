#include <stdio.h>
int main(void){
    int ingredient;
    double price[10];
    double weight[10];
    double cost=0;
    int i;
    scanf("%d",&ingredient);
    if(ingredient<=10)
    {
            for(i=0;i<ingredient;i++)
            {
                scanf("%lf",&price[i]);
                
            }
            for(i=0;i<ingredient;i++)
            {
                scanf("%lf",&weight[i]);
                cost=cost+(price[i]*weight[i]);
            }
            printf("%.6lf",cost);
             
            
    }
    else 
    {
        return 0;
    }
}