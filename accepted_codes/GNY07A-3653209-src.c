#include<stdio.h>
int main()
{
    int g,f;
    scanf("%d",&f);
    for(g=0;g<f;g++)
    {
                    char s[100];
                    int i,j;
                    scanf("%d %s",&j,s);
                    printf("%d ",g+1);
                    for(i=0;i<strlen(s);i++)
                    {
                                            if(i!=(j-1))
                                                        printf("%c",s[i]);
                    }
                    printf("\n");               
    }
    return 0;
}
