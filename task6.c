#include <stdlib.h>
#include <stdio.h>

void *custom_realloc(void *ptr, size_t old_size, size_t new_size){
	char *ptr1 = malloc(new_size);
	for(int i = 0; i < old_size; i++) ptr1[i] = *((char*)ptr + i);
	free(ptr);
	return (void*) ptr1;
}
int main(){
	int n = 5, m = 2;
	int *ptr = calloc(m, sizeof(int));
	for(int i = 0; i < m; i++) scanf("%d", &ptr[i]);
	ptr = (int*)custom_realloc(ptr, m*sizeof(int), n*sizeof(int));
	for(int i = 0; i < n; i++){
		printf("%d ", ptr[i]);
		fflush(stdout);
	}

	free (ptr);
	return 0;
}
