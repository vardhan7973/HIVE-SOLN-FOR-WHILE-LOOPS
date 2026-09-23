#include <stdio.h>

int main(){

    int n , t1=0,t2=1,nt;
    printf("Enter");
    scanf("%d",&n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    for (int i = 2;i<=n;i++){
        nt = t1+t2;
        t1=t2;
        t2=nt;

    }
    printf("%d",t2);
}
