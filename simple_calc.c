#include <stdio.h>
int main()
{
    char operator, ch;
    double num1, num2, num3;
    int r;
    printf("Enter your choice(y/n)\n");
    scanf(" %c", &ch);
    while(ch=='y')
    {
        printf("Enter an operator (+, -,*,/, r for remainder)\n");
        scanf(" %c", &operator);

        printf("Enter two numbers\n ");
        scanf("%lf%lf", &num1, &num2);
        switch(operator) 
        {
         case '+':
         num3= num1 +num2;
         printf("The sum is %.2lf + %.2lf=%.2lf\n", num1, num2, num3);
         break;
         case '-':
         num3= num1-num2;
         printf("The diffrence is %.2lf - %.2lf= %.2lf\n", num1, num2, num3 );
         break;
         case '*':
         num3 = num1*num2;
         printf("The product is %lf * %lf = %lf\n",num1,num2,num3);
         break;
         case 'r':
         num3= (int)num1%(int)num2;
         printf("The reaminder is %d\n", r);
         break;
         case '/':
         if(num2 !=0)
        {
           num3 = num1/num2;
           printf("The quotient is %.2lf / %.2lf = %.2lf\n ", num1, num2, num3);
        
        } 
        else
        {
         printf("Error division by 0");
        }
         break;
         default:
         printf("operator not valid\n");
        }
    
        printf("do u want to cont.");    
        scanf(" %c", &ch);
         

        
    }
}