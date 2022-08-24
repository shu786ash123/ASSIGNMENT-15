
#include<stdio.h>
int main()
{
       int a[100],b[1000]={0},count=0,i;
       printf("ENTER 10 NUMBER:  \n");
       for(i=0;i<=9;i++)
              scanf("%d",&a[i]);
              printf("frequency of each element is:  \n");

       for(i=0;i<10;i++){
               b[a[i]]++;
       }
              for(i=0;i<100;i++)
              {
                     if(b[i]!=0)

                     printf("%d ==>  %d \n",i,b[i]);
              }



}
