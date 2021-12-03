#include<stdio.h>
#include<conio.h>
int sum;
void display(int x,int y)
{
  sum=x+y;
  printf("the sum is=%d",sum);


};
int main()
{
    int a,b;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    display(a,b);




    getch();
}
