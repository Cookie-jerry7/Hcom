#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int x=0,y=0,z=0, count=0, and, or, xor;
  for(int i=1;i<n;i++)
  {
      for(int j=i+1; j<=n; j++)
      {
            and = i&j;
            or = i|j;
            xor = i^j;
            if(and<k && x<=and)
                x=and;
            if(or<k && y<=or)
                y=or;
            if(xor<k && z<=xor)
                z=xor; 
      }
    
  }
 
  printf("%d\n%d\n%d", x, y, z);
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
