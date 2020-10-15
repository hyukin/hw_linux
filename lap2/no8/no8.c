#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int x,y;
	int max =4;
	int min =0;
	int **xsize;
	int **ysize;

	printf("matrix x size input?");
	scanf("%d",&x);
	printf("matrix y size input?");
	scanf("%d",&y);

	xsize = (int **)malloc(sizeof(int *) *y);
	ysize = (int **)malloc(sizeof(int *) *y);
	
	for(int i=0;i<y;i++){
		xsize[i] = (int *)malloc(sizeof(int)*x);
		ysize[i] = (int *)malloc(sizeof(int)*x);
	
	}

	printf("first matrix size\n");
	for(int i=0; i<y;i++){
		for(int j=0; j<x;j++){
			xsize[i][j]= (int)(max * (rand()/(RAND_MAX+1.0)) + min);
			printf("%d",xsize[i][j]);	
		}
		printf("\n");	
	}

	printf("second matrix size\n");
	for(int i=0; i<y;i++){
		for(int j=0; j<x;j++){
			ysize[i][j]= (int)(max * (rand()/(RAND_MAX+1.0)) + min);
			printf("%d",ysize[i][j]);	
		}
		printf("\n");	
	}
	printf("mul matrix size\n");
	for(int i=0; i<y;i++){
		for(int j=0; j<x;j++){
			printf("%d",xsize[i][j]+ysize[i][j]);	
		}
		printf("\n");	
	}
	
}
