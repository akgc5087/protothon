

#include <stdio.h>
#include<conio.h>
int main()
{
    float a=0,b=0,c=0;
    int user_choice=0;
    while(1)
    {
    printf("\nchoose the operation to be performed :\n ");
    printf("1 for +\n");
    printf("2 for -\n");
    printf("3 for *\n");
    printf("4 for /\n");
    scanf("%d",&user_choice);
    switch(user_choice)
    {
        case 1:
            printf("enter the  number :\n ");
            scanf("%f",&a);
            printf("enter the  number :\n ");
            scanf("%f",&b);
            //c=a+b;
            printf("sum result is %f",a+b);
            break;
        case 2:
            printf("enter the number :\n ");
            scanf("%f",&a);
            printf("enter the number:\n ");
            scanf("%f",&b);
            printf("difference %f",a-b);
            break;
        case 3:
            printf("enter the 1st number :\n");
            scanf("%f",&a);
            printf("enter the 2st number :\n ");
            scanf("%f",&b);
            printf("product %f",a*b);
            break;    
        case 4:
            printf("enter the  number :\n ");
            scanf("%f",&a);
            printf("enter the  number :\n ");
            scanf("%f",&b);
            if(b==0||b==0.0||b==0.00)
            {
                printf("zero is not allowed\n");
            }
            else
            {
            
            printf("division  %f",a/b);
            }
            break;    
        default:
            printf("invalid choice");
    }
    }
    
    
    
    return 0;
}
