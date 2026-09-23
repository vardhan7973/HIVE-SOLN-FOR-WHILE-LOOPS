#include <stdio.h>

int main() 
{ 
    int n,f=1,i=1;
    scanf("%d",&n);
    while(i<=n){
        f = f*i;
        i= i+1;
    }
    printf("%d",f);
  
  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
