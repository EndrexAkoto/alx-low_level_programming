#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_valid_number(char *number) {
    for (int i = 0; i < strlen(number); i++) {
        if (!isdigit(number[i])) {
            return 0;
        }
    }
    return 1;
}

char *multiply(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len = len1 + len2;
    int *result = calloc(len, sizeof(int));
    char *output = calloc(len + 1, sizeof(char));

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j;
            int p2 = i + j + 1;
            int sum = product + result[p2];
            result[p1] += sum / 10;
            result[p2] = sum % 10;
        }
    }

    int k = 0;
    while (k < len && result[k] == 0) {
        k++;
    }

    for (int i = k; i < len; i++) {
        output[i - k] = result[i] + '0';
    }

    if (strlen(output) == 0) {
        output[0] = '0';
        output[1] = '\0';
    }

    free(result);

    return output;
}

int main(int argc, char *argv[]) {
    if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];
    char *result = multiply(num1, num2);

    printf("%s\n", result);

    free(result);

    return 0;
}

