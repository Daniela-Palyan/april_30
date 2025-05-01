#include <stdlib.h>
void *custom_calloc(size_t num, size_t size){
	char *p = malloc(num * size);
	for( int i = 0; i < num * size; i++) p[i] = 0;

	return (void*)p;
}
