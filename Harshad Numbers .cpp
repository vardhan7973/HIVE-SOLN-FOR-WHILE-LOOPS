#include <stdio.h>

int main() 
{ 
    int n,og,sum=0;
    scanf("%d",&n);

    og=n;

    while(n>0){
        sum+=n%10;
        n/=10;
    }

    if(og%sum==0){
        printf("Yes");
    }else{
        printf("No");
    }



 

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
