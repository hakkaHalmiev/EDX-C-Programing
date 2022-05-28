#include <stdio.h>
int main(void)
{
    int t_population;
    int day=1;
    int inf_person=1;
    int new_infPerson;
    scanf("%d",&t_population);
    while(inf_person<t_population)
    {
        day++;
        new_infPerson=inf_person*2;
        inf_person=new_infPerson+inf_person;
    }
    printf("%d",day);
    return 0;
}