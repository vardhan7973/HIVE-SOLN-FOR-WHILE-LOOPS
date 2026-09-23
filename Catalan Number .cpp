#include <stdio.h>

int main() 
{ 
    int n;
    scanf("%d",&n);

    if (n==0){
        printf("1\n");
        return 0 ;
    }

    unsigned long int res = 1;

    for(int i =1;i<=n;i++){
        res = res*(4*i-2)/(i+1);
    }

    printf("%lu\n",res);
 

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
