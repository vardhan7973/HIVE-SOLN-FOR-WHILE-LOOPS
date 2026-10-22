#include <stdio.h>

int main() 
{ 
    int n;
    scanf("%d",&n);

    int freq[10]={0};
    int num[3]={n,2*n,3*n};

    for(int i=0;i<3;i++){
        int temp=num[i];
        while(temp>0){
            freq[temp%10]++;
            temp/=10;
        }
    }

    int isfasi = 1;

    if(freq[0]>0){
        isfasi=0;
    }else{
        for(int i=1;i<=9;i++){
            if(freq[i]!=1){
                isfasi = 0;
                break;
            }
        }
    }

    if(isfasi){
        printf("true");
    }else{
        printf("false");
    }

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
