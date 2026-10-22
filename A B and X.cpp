#include <stdio.h>

int main() 
{ 
    long long  a,b,x;
    scanf("%lld%lld%lld",&a,&b,&x);

    long long diff = (a>b)?(a-b):(b-a);

    if(diff%(2*x)==0){
        printf("YES");
    }else{
        printf("NO");
    }


 

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
