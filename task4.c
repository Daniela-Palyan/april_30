#include <stdio.h>
#include <stdlib.h>

int main(){
	int size = 0, resize = 0;
	printf("Enter how many elements will be in your array: ");
	fflush(stdout);
	scanf("%d", &size);
	int *p = calloc(size, sizeof(int));
	printf("Enter your array: ");
	fflush(stdout);
	for(int i = 0; i < size; i++) scanf("%d", &p[i]);
	printf("Enter new number of elements in your aray: ");
	fflush(stdout);
	scanf("%d", &resize);
	p = realloc(p, resize * (sizeof(int)));
	if(resize > size){
		printf("Enter missing numbers: ");
		fflush(stdout);
		for(int i = size; i < resize; i++) scanf("%d", &p[i]);
	}
	printf("Your final array is: ");
	fflush(stdout);
	for(int i = 0; i < resize; i++) {
		printf("%d ", p[i]);
		fflush(stdout);
	}
	printf("\n");
	fflush(stdout);
	free(p);

	return 0;
}
