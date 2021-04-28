#include<stdio.h>
#include<math.h>

int main() {

  double a, b, d;
  char c;
  printf("*********Please Input an expression and calculate*********\n");
  printf("For example: 3 + 2 = 5")
  printf("Input 'q' or 'Q' to quit the exe!\n");

  do 
  {
    printf("Input:");


    if (scanf(" %lf %c %lf = %lf", &a, &c, &b, &d)) {

      switch (c) {
      case '+':
        if (d == a + b)
          printf("对了，你真棒！\n");
        else
          printf("错了，正确的结果是%.1lf哦。\n", d = a + b);
         break;
      case '-':
        if (d == a - b)
          printf("对了，你真棒！\n");
        else
          printf("错了，正确的结果是%.1lf哦。\n", d = a - b);
         break;
      case '*':
      case 'x':
      case 'X':
        if (d == a * b)
          printf("对了，你真棒！\n");
        else
          printf("错了，正确的结果是%.1lf哦。\n", d = a * b);
        break;
      case '/':
        if (b != 0) {
          if (d == a / b)
            printf("对了，你真棒！\n");
          else
            printf("错了，正确的结果是%.1lf哦。\n", d = a / b);
        } else
          printf("ERROR！\n");

         break;
      case '^':
        if (d == pow(a, b))
          printf("对了，你真棒！\n");
        else
          printf("错了，正确的结果是%.1lf哦。\n", d = pow(a, b));
         break;
      case '%':
        if (d == (int)a % (int)b)
          printf("对了，你真棒！\n");
        else if (b == 0)
          printf("ERROR！\n");
        else if (b != 0)
          printf("错了，正确的结果是%.1lf哦。\n", d =(int)a % (int)b);
        break;
      }              /* switch */
	  printf("Input 'q' or 'Q' to quit!\n");
    }                /* if */
	else 
		printf("Please check the expression!\n");

  }                             /* The first while */
  while ((c = getchar()) != 'q' && c  != 'Q');


  return 0;


}
