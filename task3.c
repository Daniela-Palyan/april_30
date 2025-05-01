#include <stdio.h>
#include <stdlib.h>

int main(){
	 int n = 0;
	 printf("Enter how many numbers you want to have: ");
	 fflush(stdout);
	 scanf("%d", &n);
	 float* p = calloc(n, sizeof(float));
	 printf("Enter your numbers: ");
	 fflush(stdout);
	 for(int i = 0; i < n; i++){
	 	scanf("%f", &p[i]);
	 }
	 printf("Your numbers are: ");
	 fflush(stdout);
	 for(int i = 0; i < n; i++){
	 	printf("%f ", p[i]);
		fflush(stdout);
	 }
	 printf("\n");
	 free(p);

	 return 0;
}
