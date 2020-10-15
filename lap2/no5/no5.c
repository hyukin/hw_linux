#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void my_perror(){
	printf ("errno: %d\n",errno); //error number
	printf ("strerror: %s\n",strerror(errno)); //error string
}

void main(int argc,char *argv[]){
	FILE *f;
	if(argc <2){
		printf("Useage: my_perror nofilname\n");
		exit(1);
	}
	if((f = fopen(argv[1],"r")) == NULL){
		printf("cannot open a file %s...(errno:%d)\n",argv[1],errno);	
		my_perror("fopen");
		exit(1);	
	}
	printf("Open a file \"%s\".\n",argv[1]);
	fclose(f);
}
