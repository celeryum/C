#include <stdio.h>

int main(){
	char operator;
	double num1, num2, result;
	printf("enter an operator ");
	scanf("%c", &operator);
	printf("eneter two numbers ");
	scanf("%lf %lf", &num1, &num2);
	switch(operator){
		case '+':
			result=num1+num2;
			printf("%.21lf + %.21lf = %.21lf\n",num1,num2,result);
					break;
		case '-':
			result=num1-num2;
			printf("%.21lf - %.21lf = %.21lf\n",num1,num2,result);
				break;
		case '*':
			result=num1*num2;
			printf("%.21lf * %.21lf = %.21lf\n",num1,num2,result);
				break;
		case '/':
			if (num2!=0.0) {
			result=num1/num2;
				printf("%.21lf / %.21lf = %.21lf\n",num1,num2,result);
				}else{
				printf("undefined.\n");
				}
				break;

			default:
				printf("invalid'%c'.\n", operator);
	}
return 0;
}
			

