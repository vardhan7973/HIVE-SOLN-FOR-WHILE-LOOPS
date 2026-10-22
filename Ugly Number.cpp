#include <stdio.h>

int main() 
{ 
    int m,a,b,c;
    scanf("%d%d%d%d",&m,&a,&b,&c);

    int count = 0;
    int num = 1;

    while(1){
        if(num%a==0||num%b==0||num%c==0){
            count++;
        }

        if(count==m){
            printf("%d",num);
            break;
        }
        num++;

    }

    
 

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
