#include <stdio.h>
#include <ctype.h>
// ------------LAB TASK---------------
// -----------Scrabbler---------------


int getLetterValue(char letter) {
    letter = toupper(letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'L' || letter == 'N' || letter == 'O' ||
        letter == 'R' || letter == 'S' || letter == 'T' || letter == 'U')
    {
        return 1;
    }
    else if (letter == 'D' || letter == 'G') {
        return 2;
    }
    else if (letter == 'B' || letter == 'C' || letter == 'M' || letter == 'P') {
        return 3;
    }
    else if (letter == 'F' || letter == 'H' || letter == 'V' || letter == 'W' || letter == 'Y') {
        return 4;
    }
    else if (letter == 'K') {
        return 5;
    }
    else if (letter == 'J' || letter == 'X') {
        return 8;
    }
    else if (letter == 'Q' || letter == 'Z') {
        return 10;
    }
    else {
        return 0;  // Return 0 for letters not listed in the face values
    }
}

int calculateWordValue(const char* word) {
    int value = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        value += getLetterValue(word[i]);
    }

    return value;
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    int wordValue = calculateWordValue(word);
    printf("The value of the word '%s' is %d.\n", word, wordValue);

    return 0;
}
