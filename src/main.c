#include <CLI.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <utils.h>

int main(int argC, char **argV) {
  // printUsage(argV[0]);
  cleanStrings(argV[3]);
  return 0;
}
