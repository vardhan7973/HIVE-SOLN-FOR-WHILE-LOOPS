#include <stdio.h>

int main() 
{ 
    int n;
    scanf("%d",&n);
    printf("%d",n);

    while(n>1){
        if(n%2!=0){
            n = 3*n+1;
        }else {
            n=n/2;
        }
        printf(" %d",n);
    }

    printf("\n");

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
