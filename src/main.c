#include <CLI.h>
#include <caesar.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <utils.h>
#include <viginere.h>

int main(int argC, char **argV) {
  // printUsage(argV[0]);
  for (int i = 0; i < argC; i++) {
    cleanStrings(argV[i]);
  }
  // caesarEncrypt(argV[3]);
  // caesarDecrypt(argV[3]);
  viginereEncrypt(argV[3], argV[4]);
  printf("%s", argV[3]);

  return 0;
}
