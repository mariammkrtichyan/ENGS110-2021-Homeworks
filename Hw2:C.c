#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE* f;
    int *datan;
    int sum = 0;

    datan = (int*) malloc(100* sizeof(int));
    const char* file_name = "data.txt";
    FILE* f = fopen(file_name,"r");

    if (f == NULL) {
        perror("Error occurred while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    while( fscanf(f,"%d",*datan ) !EOF){
    printf("%d\n", *datan );
    sum = sum + *datan;
 }
    printf("%d\n", sum);

    fclose(f);
    f = fopen("expected_result.txt"," w+");
    fprintf(f, "%s\n", sum);
}
