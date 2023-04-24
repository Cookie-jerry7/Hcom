#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arr[] = {0,0,0,0,0,0,0,0,0,0};
    char s[1000];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>47 && s[i]<58)
        { 
            int x = s[i] - '0';         //Converting char to integer
            arr[x]= arr[x] + 1;        //Modifying the Original Array     
        }
    }
        
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]); 
    
    return 0;
}
