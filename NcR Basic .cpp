#include <stdio.h>

int main() 
{ 
    int n,r;
    scanf("%d%d",&n,&r);

    if(r>n){
        printf("0\n");
        return 0 ;
    }

    long long n_fact = 1;
    long long r_fact = 1;
    long long nr_fact = 1;

    for (int i =1;i<=n;i++){
        n_fact*=i;
    }

    for (int i =1;i<=r;i++){
        r_fact*=i;
    }

    for (int i =1;i<=(n-r);i++){
        nr_fact*=i;
    }

    long long ans  = n_fact/(r_fact*nr_fact);
    printf("%lld\n",ans);
  

    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
