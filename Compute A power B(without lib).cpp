#include <stdio.h>


int main() 
{ 
    int a,b;
    scanf("%d%d",&a,&b);

    long long r = 1;

    for(int i = 0;i<b;i++){
        r *= a; 
    }
    printf("%lld\n",r);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
