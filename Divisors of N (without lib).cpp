#include <stdio.h>

int main() 
{ 
    int n,i;
    scanf("%d",&n);

    for(i = 1;(long long)i*i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }


    for(i=i-1;i>=1;i--){
        if(n%i==0){
            if(n/i!=i){
                printf("%d ",n/i);

            }
            
        }
    }

    printf("\n");

 

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
