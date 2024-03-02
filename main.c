#include <stdio.h>

#define MAX_BUFFER_SIZE 3000
#define MAX_SMALL_BUFFER_SIZE 50
#define MAX_FILENAME_LENGTH 200

int read_xline(FILE *stream, int lineno, char buffer[]);
int read_xcol(const char *row, int colno, char buffer[]);

int main(){
    char buffer[MAX_BUFFER_SIZE];
    char smallBuffer[MAX_SMALL_BUFFER_SIZE];
    char fname[MAX_FILENAME_LENGTH];

    printf("Welcome to the CSV Parser application!\n");
    printf("This application takes a CSV file as input and returns the value at the specified row and column that you provide.\n\n");

    printf("==> Please enter the name of the csv file: ");
    scanf("%200s", fname);

    FILE *file = fopen(fname, "r");

    if (file == NULL) {
        perror("File opening error");
        return 1;
    }else {
        printf("Reading CSV file successful.\n");
    }

    int row, column;

    printf("==> Please enter the row value: ");
    scanf("%d", &row);

    printf("==> Please enter the column value: ");
    scanf("%d", &column);

    read_xline(file, row, buffer); 
    printf("\n\n==> All values in the requested row:\n");
    printf("%s", buffer);
    printf("\n");
    printf("\n");
    printf("==> The requested cell:\n");
    read_xcol(buffer, column, smallBuffer); 
    printf("==> %s", smallBuffer);
    printf(" <==");

    printf("\n");

    return 0;
}


