#include <stdio.h>
#include <stdlib.h>
int main(){
	int n = 0;
	printf("Enter how many elements do you want to have: ");
	fflush(stdout);
	scanf("%d", &n);
	int *p = calloc(n, sizeof(int));
	printf("Enter your array: ");
	fflush(stdout);
	for(int i = 0; i < n; i++){
		scanf("%d", &p[i]);
	}
	printf("Your array is: ");
	fflush(stdout);
	for(int i = 0; i < n; i++){
		printf("%d ", p[i]);
		fflush(stdout);
	}
	printf("\n");
	free(p);

	return 0;

}
