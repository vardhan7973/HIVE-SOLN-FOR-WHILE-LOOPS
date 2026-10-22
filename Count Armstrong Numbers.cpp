#include <stdio.h>

int main() 
{ 
    int x,y;
    int count = 0;
    scanf("%d%d",&x,&y);

    for (int i=x;i<=y;i++){
        int temp = i;
        int sum = 0;
        int digits = 0;

        while(temp>0){
            digits++;
            temp/=10;
        }
        temp=i;
        while (temp>0){
            int digit=temp%10;

            int power = 1;
            for(int j =0;j<digits;j++){
                power*=digit;
         
            }
            sum +=power;
            temp/=10;
        }   
        if(sum==i){
            count++;
        }    
    }
    printf("%d",count);   

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
} 
