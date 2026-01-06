#include <stdio.h>

int main() {

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "There's something about you girl, ooh, there's something about you";
    if (pFile == NULL) {
        printf("Error Opening file\n");
        return 1;
    }
    fprintf(pFile, "%s", text);
    fclose(pFile);
    return 0;
}