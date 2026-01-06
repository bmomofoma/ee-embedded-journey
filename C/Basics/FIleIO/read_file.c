#include <stdio.h>

int main() {

    FILE *pFile = fopen("output.txt", "r");
    char buffer[1024] = {0};
    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }
    
    if (pFile == NULL) {
        printf("Error Opening file\n");
        return 1;
    }
    fclose(pFile);
    return 0;
}