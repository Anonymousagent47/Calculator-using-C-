#include<stdio.h>
#include<math.h>
void addition();
void substraction();
void multiplication();
void divison();
void squareroot();
void square();
void doall();
int main()
{
    char ch;
    printf("Enter Task You Want ( + / - / * or / or ^ / & [sqrt] / $ [To Do All]: ");
    scanf("%c",&ch);
    if(ch=='+'){
        addition();
    }else if(ch == '-'){
        substraction();
    }else if(ch == '*'){
        multiplication();
    }else if(ch == '/'){
        divison();
    }else if(ch == '^'){
        square();
    }else if(ch == '&'){
        squareroot();
    }else if(ch == '$'){
        doall();
    }else{
        printf("Enter Valid Argument !!");
    }
    return 0;

}

void addition(){
    int a,b,sum;
    printf("You Choose Addition..\n");
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    sum=a+b;
    printf("Your Answer Of Addition is %d",sum);
    printf("\nThank You !!");
}

void substraction(){
    int a,b,sum;
    printf("You choose Substraction..\n");
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    sum=a-b;
    printf("Your Answer Of Substraction is %d",sum);
    printf("\nThank You !!");
}

void multiplication(){
    int a,b,sum;
    printf("You choose Multiplication..\n");
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    sum=a*b;
    printf("Your Answer Of Multiplication is %d",sum);
    printf("\nThank You !!");
}

void divison(){
    int a,b,sum;
    printf("You choose Division..\n");
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    sum=a/b;
    printf("Your Answer Of Division is %d",sum);
    printf("\nThank You !!");
}

void square(){
    int a,sum;
    printf("You choose Square..\n");
    printf("Enter Your Number: ");
    scanf("%d",&a);
    sum=a*a;
    printf("Your Answer Of Square is %d",sum);
    printf("\nThank You !!");
}

void squareroot(){
    int a,sum;
    printf("You choose Squareroot..\n");
    printf("Enter Your Number: ");
    scanf("%d",&a);
    sum=sqrt(a);
    printf("Your Answer Of Squareroot is %d",sum);
    printf("\nThank You !!");
}

void doall(){
    int a,b,sum,sum2,sum3,sum4,sum5,sum6;
    printf("You choose To Do All..\n");
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    sum=a+b;
    sum2=a-b;
    sum3=a*b;
    sum4=a/b;
    sum5=a*a;
    sum6=sqrt(a);
    printf("Your Answer Of Addition is %d\n",sum);
    printf("Your Answer Of Substraction is %d\n",sum2);
    printf("Your Answer Of Multiplication is %d\n",sum3);
    printf("Your Answer Of Division is %d\n",sum4);
    printf("Your Answer Of Square is %d\n",sum5);
    printf("your Answer Of Squareroot is %d\n",sum6);
    printf("\nThank You !!");
}