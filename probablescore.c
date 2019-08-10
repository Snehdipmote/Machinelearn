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
    float slope,b,probable_score;
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
    printf("now lets find the slope\n");
    slope=(n*ph_hi-(sum_hi*sum_ph))/((n*sqr_ph)-pow(sum_ph,2));
    printf("slope=%f\n",slope);
    printf("now find the intercept\n");
    b=(sum_hi-(slope*sum_ph))/n;
    printf("intercept=%f\n",b);
    probable_score=(slope*10)+b;
    printf("probable score in history=%f",probable_score);
    
    
    return 0;
}
