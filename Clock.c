#include<stdio.h>
#include<stdlib.h>
int j=0;k=0,l=0;
int main()
{
    printf("Input Current time: ");
    scanf("%d%d%d",&j,&k,&l);
clock:
   for(j;j<24;j++)
    {
        for(k;k<60;k++)
        {
            for(l;l<60;l++)
            {   system("cls");
            printf("Time: Hour : Minute : Sec\n");
                printf("\t%2d : %2d _ :%d",j,k,l);
                for(double l=0;l<99999889;l++)
                {
                    l++;
                    l--;
                }
            } l=0;
        } k=0;
    } j=0;

    goto clock;
    return 0;
}
