#include <stdio.h>

int main() 
{ 
    int n,a,r;
    scanf("%d%d%d",&n,&a,&r);

    long long c = a;

    for(int i=0;i<n;i++){
        printf("%lld",c);

        if(i<n-1){
            printf(" ");
        }
        c *=r;
    }

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
