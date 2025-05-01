#include <stdlib.h>
#include <stdio.h>

int main(){
	int n = 1;
	char *p = malloc(sizeof(char));
	printf("Enter your string (0 to end): ");
	fflush(stdout);
	scanf(" %c", &p[0]);
	int i = 0;
	while(p[i] != '0'){
		i++;
		p = realloc(p, (++n * sizeof(char))); 
		scanf(" %c", &p[i]);
	}
	printf("Your string is: ");
	fflush(stdout);
	for(int j = 0; j < n - 1; j++){
		printf("%c", p[j]);
		fflush(stdout);
	}
	printf("\nYou used %d symbols\n", n - 1);
	fflush(stdout);
	free(p);
	return 0;
}



