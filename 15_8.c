#include<stdio.h>
int main()
{
       int a[10],i,count=0,j;
       printf("ENTER 10 NUMBER\n");
       for(i=0;i<=9;i++)
              scanf("%d",&a[i]);
              for(j=0;j<=8;j++)
              {


       for(i=j+1;i<=9;i++)
       {
              if(a[j] == a[i])
                     count++;
      }
              }
              count = (10-(2*count));
      printf("TOTAL NO. OF  UNIQUE ELEMENTS ARE:  %d \n",count);
}


