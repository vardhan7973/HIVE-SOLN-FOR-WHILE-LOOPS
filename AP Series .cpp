#include <stdio.h>

int main() 
{ 
    int a,d,n,i,c;
    scanf("%d%d%d",&a,&d,&n);

    for (i=0;i<n;i++){
        c = a+(i*d);
        printf("%d",c);
        if(i<n-1){
            printf(" ");
        }

    }

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
