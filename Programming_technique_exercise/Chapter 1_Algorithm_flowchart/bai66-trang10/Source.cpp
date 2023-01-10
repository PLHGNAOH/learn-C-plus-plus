#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double a, b, c, delta, xa, xb, x1, x2, x3, x4;
    printf("Add a b c : ");
    scanf_s("%lf%lf%lf", &a, &b, &c);
    delta = (b * b) - (4 * a * c);
    if (a != 0 && b != 0 && c != 0)
    {
        if (delta > 0)
        {
            xa = (-b + sqrt(delta)) / (2 * a);
            xb = (-b - sqrt(delta)) / (2 * a);
            if (xa > 0 && xb > 0)
            {
                printf("x1 = %lf", +sqrt(xa));
                printf("x2 = %lf", -sqrt(xa));
                printf("x3 = %lf", +sqrt(xb));
                printf("x4 = %lf", -sqrt(xb));
            }

            else if (xa > 0 && xb == 0)
            {
                printf("x1 = %lf", +sqrt(xa));
                printf("x2 = %lf", -sqrt(xa));
                printf("x3 = 0");
            }

            else if (xa == 0 && xb > 0)
            {
                printf("x1 = %lf", +sqrt(xb));
                printf("x2 = %lf", -sqrt(xb));
                printf("x3 = 0");
            }

            else if (xa > 0 && xb < 0)
            {
                printf("x1 = %lf", +sqrt(xa));
                printf("x2 = %lf", -sqrt(xa));
            }

            else if (xa < 0 && xb  > 0)
            {
                printf("x1 = %lf", +sqrt(xb));
                printf("x2 = %lf", -sqrt(xb));
            }

            else if (xa == 0 && xb == 0)
            {
                printf("x = 0");
            }

            else if (xa < 0 && xb < 0)
            {
                printf("Pt vo nghiem");
            }
        }
        else if (delta == 0)
        {
            xa = -b / (2 * a);
            if (xa > 0)
            {
                printf("x1 = %lf", +sqrt(xa));
                printf("x2 = %lf", -sqrt(xa));
            }
            else if (xa == 0)
            {
                printf("x = 0");
            }
            else if (xa < 0)
            {
                printf("Pt vo nghiem");
            }
        }
        else if (delta < 0)
        {
            printf("Pt vo nghiem");
        }
    }
    else if (a != 0 && b != 0 && c == 0)
    {
        if ((-b / a) > 0)
        {
            printf("x = 0");
            printf("x1 = %lf", +sqrt(-b / a));
            printf("x1 = %lf", -sqrt(-b / a));
        }
        else printf("x = 0");
    }
    else if (a != 0 && b == 0 && c != 0)
    {
        if ((-c / a) > 0)
        {
            printf("x1 = %lf", +sqrt(sqrt(-c / a)));
            printf("x1 = %lf", -sqrt(sqrt(-c / a)));
        }
        else printf("Pt vo nghiem");
    }
    else if (a == 0 && b != 0 && c != 0)
    {
        if ((-c / b) > 0)
        {
            printf("x1 = %lf", +sqrt(-c / b));
            printf("x1 = %lf", -sqrt(-c / b));
        }
        else printf("Pt vo nghiem");
    }
    else if (a == 0 && b == 0 && c == 0)
    {
        printf("Pt luon dung voi moi x");
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        printf("Pt vo nghiem");
    }
    else if ((a == 0 && b != 0 && c == 0) || (a != 0 && b == 0 && c == 0))
    {
        printf("x = 0");
    }
}