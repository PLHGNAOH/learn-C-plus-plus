#include<stdio.h>
#include<conio.h>
#include<math.h>
void enter(int &n)
{
    do
    {
        printf("\nenter a posible interger n ");
        scanf_s("%d",&n);
        if(n<0)
        {
            printf("\nplease re-enter a posible interger n ");
        }

    }while(n<0);
}
int checksquarenumber(int n)
{
    int i=sqrt(n);
    if (i*i == n)
    {
      printf("\n %d la so chinh phuong ",n);
    }
    else if(i*i != n )
    {
        printf("\n%d khong la so chinh phuong ");
    }
    return n;
}
int main()
{
    int a;
    enter(a);
    int c=checksquarenumber(a);
    _getch();
    return 0;
}