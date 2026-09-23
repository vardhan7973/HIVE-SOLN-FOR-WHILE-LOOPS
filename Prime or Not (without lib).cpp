#include <stdio.h>

int main() 
{ 
    int n;
    scanf("%d",&n);

    if (n<=1){
        printf("No\n");
        return 0;
    }

    int ip = 1;

    for (long long i = 2;i*i<=n;i++){
        if(n%i==0){
            ip=0;
            break;
        }
    }

    if(ip==1){
        printf("Yes\n");

    }else{
        printf("No\n");
    }

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
