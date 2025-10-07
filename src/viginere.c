#include <stdio.h>
#include <string.h>
#include <viginere.h>

void viginereEncrypt(char *wordToEncrypt, char *key) {
  for (int i = 0; wordToEncrypt[i] != '\0'; i++) {
    char ch = wordToEncrypt[i];
    char chK = key[i % strlen(key)];
    wordToEncrypt[i] = ((((ch - 'A') + (chK - 'A')) % 26) + 'A');
  }
}

void viginereDecrypt(char *wordToDecrypt, char *Dkey) {
  for (int i = 0; wordToDecrypt[i] != '\0'; i++) {
    char ch = wordToDecrypt[i];
    char chK = Dkey[i % strlen(Dkey)];
    wordToDecrypt[i] = (((((ch - 'A') - (chK - 'A')) + 26) % 26) + 'A');
  }
}