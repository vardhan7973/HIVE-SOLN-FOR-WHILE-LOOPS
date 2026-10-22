#include <stdio.h>

int main() 
{ 
    int n;
    scanf("%d",&n);

    int arr[1005];
    int min_can = 10005;

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]<min_can){
            min_can=arr[i];
        }
    }
     
    int tot_eat = 0;

    for(int i=0 ;i<n;i++){
        tot_eat += (arr[i]-min_can); 
    }

    printf("%d",tot_eat);




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
