#include<stdio.h>
int main()
{
       int a[10]={1,3,5,7,9},b[10]={2,6,8,11,12},c[10],i=0,j=0,k=0;


       for(k=0;k<10;k++)
       {
              if(i>=5)
              {
                     while(k<10)
{
            c[k]=b[j];
            j++;
            k++;
            if(k==10)
              break;
       }
              }



              else if(a[i]<b[j])
              {
                     c[k]=a[i];
                     i++;
              }
              else
              {
                     c[k] = b[j];
                     j++;
              }}
       for(k=9;k>=0;k--)
              printf("%d   ",c[k]);
       return 0;
}
