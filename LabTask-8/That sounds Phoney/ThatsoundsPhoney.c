#include <stdio.h>
//------------LAB TASK------------------
//------------That sounds Phoney---------

int main() {
    char phoneNumber[20];
    printf("Enter phone number: ");
    scanf("%s", phoneNumber);

    for (int i = 0; phoneNumber[i] != '\0'; i++) {
        switch (phoneNumber[i]) {
            case 'A': case 'B': case 'C':
                phoneNumber[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                phoneNumber[i] = '3';
                break;
            case 'G': case 'H': case 'I':
                phoneNumber[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                phoneNumber[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                phoneNumber[i] = '6';
                break;
            case 'P': case 'Q': case 'R': case 'S':
                phoneNumber[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                phoneNumber[i] = '8';
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                phoneNumber[i] = '9';
                break;
            default:
                break;
        }
    }

    printf("Translated phone number: %s\n", phoneNumber);

    return 0;
}

