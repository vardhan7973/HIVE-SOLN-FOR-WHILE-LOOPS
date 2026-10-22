#include <stdio.h>

int main() 
{ 
    unsigned long long n;
    scanf("%llu",&n);
    

    unsigned long long m_3=n/3;
    unsigned long long m_5=n/5;
    unsigned long long m_15=n/15;

    unsigned long long total = m_3+m_5-m_15;
    printf("%llu\n",total);

    

  
    


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
