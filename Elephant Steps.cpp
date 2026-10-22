#include <stdio.h>

int main() 
{ 
    long long n;
    scanf("%lld",&n);

    long long steps = n/5;

    if (n%5!=0){
        steps++;
    }

    printf("%lld",steps);
 

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
