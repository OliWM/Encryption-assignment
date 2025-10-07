#import <caesar.h>
#include <stdio.h>

void caesarEncrypt(char *wordToEncrypt) {
  for (int i = 0; wordToEncrypt[i] != '\0'; i++) {
    char ch = wordToEncrypt[i];
    wordToEncrypt[i] = ((ch - 'A' + 3) % 26) + 'A';
  }
}

void caesarDecrypt(char *wordToDecrypt) {
  for (int i = 0; wordToDecrypt[i] != '\0'; i++) {
    char ch = wordToDecrypt[i];
    wordToDecrypt[i] = ((ch - 'A' - 3 + 26) % 26) + 'A';
  }
}
