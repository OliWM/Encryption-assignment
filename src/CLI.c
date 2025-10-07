// CLI.c
// Source file for the CLI functionality of our en-/decryption programme

#include <CLI.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool checkIfValid(int noOfArguments, char *mode, char *algo) {
  if (strcmp(algo, "v") != 0 && strcmp(algo, "c") != 0) {
    return 0;
  } // else if (strcmp(mode, "e") != 0 && strcmp(mode, "d") != 0) {
    // return 0; }
  else if (strcmp(mode, "e") == 0 && noOfArguments != 3) {
    return 0;
  } else if (strcmp(mode, "v") == 0 && noOfArguments != 4) {
    return 0;
  } else {
    return 1;
  }
};

// void useTheRightAlgo

void printUsage(const char *programmeName) {
  printf("Usage: %s MODE ALGORITHM TEXT [KEY]\n", programmeName);
  printf("Modes:\n\n    e  Encrypt the input text\n    d  "
         "Decrypt the input text");
  printf("Algorithms:\n\n    c  Caesar cipher\n    v  "
         "Vigènere cipher");
  printf("Only use letters (A-Z) and do NOT use spaces in your message. The "
         "programme will only "
         "receive your message as one long word and if you use a space in your "
         "message everything after the space will not be included. Numbers and "
         "symbols will be deleted from message.");

  printf(
      "Examples:\n\n%s e c MEETATYOURHOUSEATELEVEN\n%s d v BLABLABLABLA HONEY",
      programmeName, programmeName);
}
// insert something to decrypt when you have made the rest of the programme and
// also what the result would be for ease of use
