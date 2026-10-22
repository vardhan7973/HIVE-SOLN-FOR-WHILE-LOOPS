#include <stdio.h>

int main() 
{ 
    long long  n,k;
    while(scanf("%lld%lld",&n,&k)==2){
        if(k>=30){
            printf("%lld\n",n+1);
        }else{
            long long tot_ways = 1LL << k;

            if(n+1<tot_ways){
                printf("%lld\n",n+1);
            }else{
                printf("%lld\n",tot_ways);
            }
        }
    }
  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
