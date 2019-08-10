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
   int n,freq;
   float mean,sum=0,temp_sd=0;
   printf("enter the size of array\n");
   scanf("%d",&n);
   int arr[n];
   printf("enter the array elements\n");
   for(int i=1;i<=n;i++)
   {
       scanf("%d",&arr[i]);
       sum=sum+arr[i];
       temp_sd=temp_sd+pow(arr[i]-mean,2);
    }
   mean=sum/n;
   printf("mean=%f\n",mean);
   if(n%2==0)
   {
       float median=(arr[n/2]+arr[(n+2)/2])/2.0;
       printf("median=%f\n",median);
   }
   else
   {
       float median=(arr[(n+1)/2]);
       printf("median=%f\n",median);
   }
   float SD;
   SD=pow(temp_sd/n,0.5);
   printf("SD=%f\n",SD);
   
   int mode(int a[],int n) {
   int maxVal = 0, maxfreq = 0, i, j;

   for (i = 0; i < n; i++)
   {
      int freq = 0;
      
      for (j = 0; j < n; j++) {
         if (a[j] == a[i])
         freq++;
      }
      
      if (freq > maxfreq) {
         maxfreq = freq;
         maxVal = a[i];
      }
   }

   return maxVal;
       
   }
   printf("Mode = %d ", mode(arr,n));


   
   
  
   

    return 0;
}


