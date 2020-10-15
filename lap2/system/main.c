#include <stdio.h>
#include "cal.h"
#include <math.h>
void main(){
	int a,b;
	char pro;
	printf("welcome math machine! plz! input first number!");
		scanf("%d",&a);
		getchar();
		printf("+(+),-(-),*(x),/(/),etc(error)");
		scanf("%c",&pro);
		getchar();
		printf("second number!");
		scanf("%d",&b);
	switch(pro){
			case '+':
				printf("\nresult: %d\n",add(a,b));
				break;
			case '-':
				printf("\nresult: %d\n",sub(a,b));
				break;
			case '*':
				printf("\nresult: %d\n",mul(a,b));
				break;
			case '/':
				printf("\nresult: %d\n",div(a,b));
				break;
			default:
				printf("\nerror!\n");
				break;
		}

		

	
}

