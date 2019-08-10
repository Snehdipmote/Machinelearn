/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int n,i=1,j=1;
    printf("enter the size\n");
    scanf("%d",&n);
    int ph[n],hi[n];
    int sum_ph=0,sum_hi=0,sqr_ph=0,sqr_hi=0,ph_hi=0;
    float r,nume,denom;
    printf("first enter the ph element immediately enter the hi element\n");
    for(i=1;i<=n;i++)
    {   
        scanf("%d",&ph[i]);
        sum_ph=sum_ph+ph[i];
        sqr_ph=sqr_ph+(ph[i]*ph[i]);
        
        scanf("%d",&hi[i]);
        sum_hi=sum_hi+hi[i];
        sqr_hi=sqr_hi+(hi[i]*hi[i]);
        ph_hi=ph_hi+(ph[i]*hi[i]);
    }
    printf("sum of physics=%d\n sum of square of physics=%d\n",sum_ph,sqr_ph);
    printf("sum of history=%d\n sum of square of history= %d\n",sum_hi,sqr_hi);
    printf("sum of product of phy and his=%d\n",ph_hi);
    printf("now lets find the slope\n");
    nume=(n*ph_hi-(sum_hi*sum_ph));
    denom=pow((n*sqr_ph)-pow(sum_ph,2),0.5)*pow((n*sqr_hi)-pow(sum_hi,2),0.5);
    r=nume/denom;
    printf("r=%f",r);
    
    return 0;
}
