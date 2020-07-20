#include<stdio.h>
int main()
{
  /* INITIALIZATION */
  int num1,num2;
  float results;
  char operator;

  /* TO ENTER AND READ THE FIRST NUMBER */
  printf("Enter the first number " );
  scanf("%d",&num1);

  /* TO ENTER AND READ THE SECOND NUMBER */
  printf("Enter the second number " );
  scanf("%d",&num2);

  /* TO ENTER AND READ THE OPERATOR */
  printf("Enter the operator (+,-,*,/) : ");
  scanf(" %c",&operator);

  switch (operator)
  {
    /* FOR ADDITION */
    case '+':
    results = num1+num2;
    break;

    /* FOR SUBRACTION */
    case '-':
    results = num1-num2;
    break;

    /* FOR MULTIPLICATION */
    case'*':
    results = num1*num2;
    break;

    /* FOR DIVISION */
    case '/':
    results = (float)num1/(float)num2;
    break;

    /* IF INVALID OPERATOR IS ENTERED */
    default:
    printf("INVALID OPERATOR");
  }
  /* TO PRINT THE RESULT */
  printf("%d %c %d = %.6f",num1,operator,num2,results);
  return 0;
}
