#include <stdio.h>
#include <string.h>
int main() 
{ 
    char n[20];
    while(scanf("%s",&n)==1){
        int len = strlen(n);
        if(len == 2){
            printf("%c\n",n[1]);
        }else{
            char min_digi =n[0];
            for(int i=1;i<len;i++){
                if(n[i]<min_digi){
                    min_digi= n[i];
                }
            }
            printf("%c\n",min_digi);
        }
    }

    
  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
