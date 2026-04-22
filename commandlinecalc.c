//Command line calc using switch statement 

// # include <stdio.h>
// # include <float.h>

// int main() {
//     char op;
//     double a, b, res;

//     printf("Enter an operator (+, -, /, *,): ");
//     scanf("%c", &op);


//     printf("Enter two operands: ");
//     scanf("%lf %lf", &a, &b);

//     switch (op) {
//     case '+':
//         res = a + b;
//         break;
//     case '-':
//         res = a - b;
//         break;
//     case '/':
//         res = a / b;
//         break;
//     case '*':
//         res = a * b;
//         break;
//     default:
//     printf("Error ! Incorrect Operator Value\n");
//     res = -DBL_MAX;
//     }
//     if(res!=-DBL_MAX)
//         printf("%.2lf", res);
    
//     return 0;

// }

// Command line calc using If-else statement 

#include <float.h>
#include <stdio.h>

int main() {
    char op;
    double a, b, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    if (op == '+')
        res = a + b;
    else if (op == '-')
        res = a - b;
    else if (op == '*')
        res = a * b;
    else if (op == '/')
        res = a / b;
    else {
        printf("Error! Operator is not correct. Please Try again.\n");
        res = -DBL_MAX;
    }
  
    if (res != -DBL_MAX)
        printf("Result: %.2lf\n", res);

    return 0;
}