#include <stdio.h>
#include <string.h>

int main() {
    char data[100], destuffeddata[200];
    int i, count = 0, j = 0;

    printf("Enter the data: ");
    scanf("%s", data);

    for (i = 0; i < strlen(data); i++) {
        destuffeddata[j++] = data[i];
        if (data[i] == '1') {
            count++;
            if (count == 5 && data[i+1]=='0') {
                i++;
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    destuffeddata[j] = '\0';

    printf("Data after bit de-stuffing: %s\n", destuffeddata);

    return 0;
}