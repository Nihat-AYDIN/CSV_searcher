#include <stdio.h>
#define MAX_BUFFER_SIZE 3000

/**reads the line given with lineno 
 * into the given buffer and returns its length
 * tr: fname isimli streamden lineno ile verilen satiri buffera okuyarak uzunlugunu return eder
 *
 */

int read_xline(FILE *stream, int lineno, char buffer[]){
    int currentLine = 1;
    int i = 0;
    int j = 0;
    char character;

    while ((character = fgetc(stream)) != EOF) {

        if (character == '\n'){
            currentLine ++;
        }
        if (lineno == currentLine) {
            if (j < MAX_BUFFER_SIZE - 1) {
                buffer[j] = character;
                i ++;
                j ++;
            }
        }else if (lineno < currentLine) {
            break;
        }
    }
    buffer[j] = '\0'; // Buffer'ı null-terminated yap

    return 0;
}

/**finds the column with colno index, and copies that into the buffer.
 * returns its length.
 * tr: verilen satir stringinde ","lerle ayrilmis sutunlari bularak 
 * colno indeksli sutunu buffera kopyalar ve uzunlugunu return eder.
 */
int read_xcol(const char *row, int colno, char buffer[]){
    int currentRow = 1;
    int quotesNumber = 0;
    int j = 0;
    int i = 0;

    while (row[i] != '\0') {
        if (row[i] == '"') {
            quotesNumber ++;
        }
        if (quotesNumber != 1 && row[i] == ','){
            currentRow ++;
        }
        if (colno == currentRow) {
            if (row[i] != ',') {
                buffer[j] = row[i];
                j++;
            }
        }else if (colno < currentRow) {
            break;
        }
        if (quotesNumber == 2) {
            quotesNumber = 0;
        }

        i ++;
    }
    buffer[j] = '\0'; // Buffer'ı null-terminated yap

    return 0;
}
