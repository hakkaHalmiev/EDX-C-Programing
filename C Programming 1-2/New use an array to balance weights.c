#include <stdio.h>
int main(void)
{
  int number,i;
  double weights,fark;
  double sumWeights=0;
  double boxcars[50];
  int a=0;
  scanf("%d",&number);
  if(number<=50){
  for(i=0;i<number;i++)
  {
      scanf("%lf",&weights);
      boxcars[a]=weights;
      sumWeights=sumWeights+weights;
      a++;
  }
  fark=sumWeights/number;
  for(i=0;i<number;i++)
  {
      printf("%.1lf\n",fark-boxcars[i]);
  }
  }
  else {
      return 0;
  }
  return 0;
  
}