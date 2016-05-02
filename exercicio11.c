#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCCESS 0

int main ()
{
    int x,u,d,c;;

    printf("Digite o numero\n");
    scanf("%d", &x);
    c= x/100;
    d= (x-(c*100))/10;
    u= x-(c*100)+(d*10);

    if(c==1 && d==2*u) // inicio bug xor
        printf("%d%d%d", c,d-1,u);
    else
    {
        if(c==1 && u==2*d)
            printf("%d%d%d",c,d,u-1);
        else
        {
            if (c==1 && u==1)
                printf("%d%d%d",c,d-(d-1),u);
            else
            {
                if(c==1 && d==1)
                    printf("%d%d%d",c,d,u-(u-1));
                else
                {
                    if(d==0 && u==1)
                        printf("%d%d%d", c-c,d,u);
                    else
                    {
                        if(d==1 && u==1)
                            printf("%d%d%d",c-c,d,u);
                        else
                        {
                            if(c==0 && u==1)
                                printf("%d%d%d",c,d-d,u);
                            else
                            {
                                if(c==1 && u==0)
                                    printf("%d%d%d",c,d-d,u);
                                else
                                {
                                    if(c==0 && d==1)
                                        printf("%d%d%d",c,d,u-u);
                                    else
                                    {
                                        if(c==1 && d==0)
                                            printf("%d%d%d",c,d,u-u);
                                        else
                                        {
                                            if((u^d^c)==1)
                                            {
                                                if(c>0)
                                                    printf("%d%d%d",c-1,d,u);
                                                else
                                                {
                                                    if(d>0)
                                                        printf("%d%d%d",c,d-1,u);
                                                }
                                            }
                                        }
                                        else
                                        {
                                            if((u^d^c)==2)
                                            {
                                                if(c>1)
                                                    printf("%d%d%d",c-2,d,u);
                                                else
                                                {
                                                    printf("%d%d%d",c,d-2,u);
                                                }
                                            }



}
