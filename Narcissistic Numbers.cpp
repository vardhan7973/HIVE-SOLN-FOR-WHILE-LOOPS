#include <stdio.h>

int main() 
{ 
    int n;
    scanf("%d",&n);


    if (n==0)
    {
        printf("Yes\n");
        return 0 ;
    }

    int temp = n ;
    int digi = 0;
 

    while(temp>0){
        digi++;
        temp/=10;
    }

    temp = n;
    int sum =0;

    while(temp>0){
        int rem = temp%10;
        int pow = 1;
        for(int i =0;i<digi;i++){
            pow*=rem;
        }
        sum+=pow;
        temp/=10;
    }

    if(sum==n){
        printf("Yes\n");
    }else {
        printf("No\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
