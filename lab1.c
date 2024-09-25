#include <stdio.h>
#include <string.h>

int main() {
    char data[100], stuffeddata[200];
    int i, count = 0, j = 0;

    printf("Enter the data: ");
    scanf("%s", data);

    for (i = 0; i < strlen(data); i++) {
        stuffeddata[j++] = data[i];
        if (data[i] == '1') {
            count++;
            if (count == 5) {
                stuffeddata[j++] = '0';
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    stuffeddata[j] = '\0';

    printf("Data after bit stuffing: %s\n", stuffeddata);

    return 0;
}