#include<stdio.h>
int  input(int[] ,int );
int main()
{
       int s,i;
       int marks[10]={10,20,50,30,40,150,60,70,80,90,};

       s = input(marks,10);
       printf("smallest number is %d",s);
       return 0;
}
int input(int b[],int a)
{
    int i,max=b[0];
       for(i=1;i<=a;i++)
       {
              if(max>b[i])
                     max = b[i];
       }

        return max;

}



