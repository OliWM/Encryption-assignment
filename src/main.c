#include <CLI.h>
#include <caesar.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <utils.h>
#include <viginere.h>

// No welcome message as nothing runs before we have our arguments and thus it
// is too late to instruct how to use.

int main(int argC, char **argV) {

  for (int i = 1; i < argC; i++) {
    cleanStrings(argV[i]);
  };

  if (!checkIfValid(argC, argV[1], argV[2])) {
    printUsage(argV[0]);
    return 1; // returning 1 means an error happened
  };

  applyModeAndAlgo(argV[1], argV[2], argV[3], argV[4]);

  printf("%s", argV[3]);

  return 0;
}
