#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
int main()
{
	void *handle;
	int (*add)(int, int), (*sub)(int, int), (*mul)(int, int), (*div)(int, int);
	char *error;

	int a,b,result;
	char pro;

	handle = dlopen ("./lib/libmath.so", RTLD_LAZY);
	if (!handle) {
		fputs (dlerror(), stderr);
		exit(1); 
	}

	add = dlsym(handle, "add"); 
	if ((error = dlerror()) != NULL) { 
	fprintf (stderr, "%s", error); 
	
	}

	sub = dlsym(handle, "sub"); 
	if ((error = dlerror()) != NULL) { 
	fprintf (stderr, "%s", error); 
	
	}

	mul = dlsym(handle, "mul"); 
	if ((error = dlerror()) != NULL) { 
	fprintf (stderr, "%s", error); 
	
	}
	div = dlsym(handle, "div"); 
	if ((error = dlerror()) != NULL) { 
	fprintf (stderr, "%s", error); 
	
	}

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
	dlclose(handle);
	return 0;
}

	
