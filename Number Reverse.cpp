#include <stdio.h>

int main() 
{ 
    long long n;
    long long rev =0;
    scanf("%lld",&n);

    while (n!=0){
        rev = rev*10+(n%10);
        n/=10;
    }

    printf("%lld",rev);
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
