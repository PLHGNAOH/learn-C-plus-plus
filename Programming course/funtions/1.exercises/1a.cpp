#include<stdio.h>
#include<conio.h>
void enter(char &x)
{
    printf("\nenter a character ");
    scanf_s("%c",&x);
}
char changecharacter(char x)
{

    if(x>='a' && x<='z')
    {
        x-=32;
    }
    else if(x>='A'&& x<='Z')
    {
        x+=32;
    }

}
int main()
{
    char x;
    enter(x);
    char c=changecharacter(x);
    printf("\ncharacter after change is %c",c);    
    _getch();
    return 0;
}