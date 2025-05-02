#include <stdio.h>
#include <stdlib.h>

int main(){
    int tox = 0, syun = 0;
    printf("Enter parametrs of your matrix: ");
    scanf("%d %d", &tox, &syun);
    int *ptr = calloc(tox, syun * sizeof(int));
    printf("Enter elements of your matrix\n\n");
    for(int i = 0; i < syun; i++){
        printf("Row N0 %d: ", i + 1);
        for(int j = 0; j < tox; j++){
            scanf("%d", &ptr[i*syun + j]);
        }
    }
    printf("Your matrix is: \n");
    for(int i = 0; i < syun; i++){
        for(int j = 0; j < tox; j++) printf("%d ", ptr[i*syun + j]);
        printf("\n");
    }

    free(ptr);

    return 0;
}
