#include<stdio.h>
void input(int [],int);
int main()
{
       int a[10]={50,40,30,20,10,60,80,90,70,9};
       input(a,10);
       return 0;
}
void input(int b[],int n)
{
       int i,temp=0,j;
 for(i=0;i<n-1;i++)
              {
                     for(j=i+1;j<n;j++)
                     {
                       if(b[i]>b[j])
                     {
                            temp = b[i];
                            b[i] = b[j];
                            b[j]=temp;

                     }
              }
}
for(i=0;i<=9;i++)
{
       printf("%d  ",b[i]);

}
return 0;
}
