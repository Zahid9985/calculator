#include<stdio.h>
int main()
{
    int num,num1,num2,sum,subs,num3,num4,num5,num6,mul,num7,num8;
    float div;
    printf("Hello user its a Calculator\n\n");

    printf("Press any num..\n\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Devition\n");
    
    scanf("%d",&num);
    if (num==1)
    {
        printf("ADDITION\n");
        printf("Enter number1\n");
        scanf("%d",&num1);
        printf("Enter number2\n");
        scanf("%d",&num2);
        sum=(num1+num2);
        printf("addition of num1 and num2 is =%d\n",sum);
    }
    else if (num==2)
    {
        printf("SUBSTEACTION\n");
        printf("Enter number1\n");
        scanf("%d",&num3);
        printf("Enter number2\n");
        scanf("%d",&num4);
         if (num3<<num4)
         {
            subs=(num4-num3);
         }
         else if (num3>>num4)
         {
             subs=(num3-num4);
         }
         else {
            return 0;
         }
        printf("substcartion of num3 and num4 is =%d\n",subs);
    }
    else if (num==3)
    {
        printf("MULTIPLICATION\n");
        printf("Enter number1\n");
        scanf("%d",&num5);
        printf("Enter number2\n");
        scanf("%d",&num6);
        mul=(num5*num6);
        printf("multiplication of num1 and num2 is =%d\n",mul);
    }
    else if (num==4)
    {
        printf("DIVISION\n");
        printf("Enter number1\n");
        scanf("%d",&num7);
        printf("Enter number2\n");
        scanf("%d",&num8);
        div=(num7*num8);
        printf("multiplication of num1 and num2 is =%f\n",div);
    }
    else
    {
        printf("Enter valid number given up");
    }
    
    
    
    



    return 0;
}