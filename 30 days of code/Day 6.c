#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int t;
    char s[10000];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%s",s);
        for(int j=0;s[j]!='\0';j++)
        {
            if(j%2==0)
                    printf("%c",s[j]);
        }
        
        printf(" ");
        for(int j=0;s[j]!='\0';j++)
        {
            if(j%2!=0)
                    printf("%c",s[j]);
        }
        printf("\n"); 
    }
    
    return 0;
}
