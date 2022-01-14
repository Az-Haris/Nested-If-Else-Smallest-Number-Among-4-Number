#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1, num2, num3, num4;
    printf("Please Enter 4 Number to identify Smallest one : ");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);
    if((num1<num2)&&(num1<num3)&&(num1<num4))
    {
        printf("%.2f is the Smallest Number",num1);
    }
    else if((num2<num1)&&(num2<num3)&&(num2<num4))
    {
        printf("%.2f is the Smallest Number",num2);
    }
    else if((num3<num1)&&(num3<num2)&&(num3<num4))
    {
        printf("%.2f is the Smallest Number",num3);
    }
    else if(num1=num2=num3=num4)
    {
        printf("You've Entered Two or More Same Value");
    }
    else
    {
        printf("%.2f is the Smallest Number",num4);
    }
    getch();
    return 0;
}
