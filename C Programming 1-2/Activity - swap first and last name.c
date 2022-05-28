#include<stdio.h>
int main(void)
{
    int nbnames=0,i=0;
    scanf("%d",&nbnames);
    for(i=0;i<nbnames;i++)
    {
        char Fname[101];
        char Lname[101];
        scanf("%s %s",Fname,Lname);
        printf("%s %s\n",Lname,Fname);
    }
    return 0;
}