
#include<stdio.h>
int main()
{
       int i,j,temp=0,n,a[10],d,k;
       printf("ENTER THE NUMBER OF ROTATIONS:  \n");
       scanf("%d",&d);

       printf("ENTER 10 NUMBERS:  \n");
       for(i=0;i<=9;i++){
              scanf("%d",&a[i]);
       }
       for(j=0;j<d;j++)
       {
              temp=a[0];
              for(k=0;k<=8;k++)
              {
                     a[k]=a[k+1];
              }
              a[9]=temp;
       }
      printf("ROTATION OF %d NUMBER TO RIGHT SIDE IN A GIVEN ARRAY IS: \n",d);
       for(i=0;i<=9;i++)
              printf("%d  ",a[i]);
}

