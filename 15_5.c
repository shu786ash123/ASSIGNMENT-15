#include<stdio.h>
int main()
{
       int a[10],i,count=0;
       printf("ENTER 10 NUMBER\n");
       for(i=0;i<=9;i++)
              scanf("%d",&a[i]);
       for(i=0;i<=8;i++)
       {
              if(a[i]==a[i+1])
                     count++;

       if(count==1)
              break;
      }
      printf("FIRST OCCURENCE OF ADJACENT DUPLICATE VALUES %d \n",a[i]);
}
