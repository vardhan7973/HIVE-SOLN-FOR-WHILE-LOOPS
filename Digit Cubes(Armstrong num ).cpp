#include <stdio.h>

int main() 
{ 
    long long n;
    scanf("%lld",&n);

    long long og=n;
    long long sum = 0;

    if (n==0){
        sum=0;
    }

    while(n>0){
        long long d = n%10;
        sum +=(d*d*d);
        n/=10;
    }

    if(sum==og){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
