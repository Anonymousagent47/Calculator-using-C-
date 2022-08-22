#include<stdio.h>
#include<math.h>
int main()
{
char ch;
int n,m,sum;
printf("Enter Your Task in Symbol (+/-/* or / or ^ / & (for squareroot): " );
scanf("%c",&ch);

switch (ch)
{
case '+' :
    printf("You Choose Addition...\n\n");
    printf("Enter First Number: ");
    scanf("%d",&n);

    printf("Enter Second Number: ");
    scanf("%d",&m);
    sum=n+m;
    printf("Your Answer is %d\n\n",sum);
    
    printf("Thank You!!");

    break;
    case '-' :   printf("You Choose Substraction...\n\n");
    printf("Enter First Number: ");
    scanf("%d",&n);

    printf("Enter Second Number: ");
    scanf("%d",&m);

    sum=n-m;
    printf("Your Answer is %d\n\n",sum);
    printf("Thank You !!");
    break;

    case '*' :   printf("You Choose Multiplication...\n\n");
    printf("Enter First Number: ");
    scanf("%d",&n);

    printf("Enter Second Number: ");
    scanf("%d",&m);

    sum=n*m;
    printf("Your Answer is %d\n\n",sum);
    printf("Thank You !!");
    break;

    case '/' :   printf("You Choose Dividation...\n\n");
    printf("Enter First Number: ");
    scanf("%d",&n);

    printf("Enter Second Number: ");
    scanf("%d",&m);

    sum=n/m;
    printf("Your Answer is %d\n\n",sum);
    printf("Thank You !!");
    break;

    case '^' :   printf("You Choose Square...\n\n");
    printf("Enter Your Number: ");
    scanf("%d",&n);

    sum=n*n;
    printf("Your Answer is %d\n\n",sum);
    printf("Thank You !!");
    break;

    case '&' :   printf("You Choose Squareroot...\n\n");
    printf("Enter Your Number: ");
    scanf("%d",&n);

    sum=sqrt(n);
    printf("Your Answer is %d\n\n",sum);
    printf("Thank You !!");
    break;



default: printf("Choose Valid Attributes For Calculation !!");
    break;
}
return 0;
}