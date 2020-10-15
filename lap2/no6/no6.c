#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void my_assert(int num){
	if((num>=num)&&(num<=100))
		printf("assert num= %d\n",num);
	else{
		printf("assert c:7:my_assert: Assention '((num >=0) && (num<=100)' failed\n",stdout);
		abort(); //program stop!
	}
}

void main(int argc,char *argv[]){
	int num;
	if(argc <2){
	fprintf(stderr,"Usage: assert_test aNumber\n(0 <= aNumber <= 100)\n" );
	exit(1);
	}

	num = atoi(argv[1]);scl
	my_assert(num);
}
