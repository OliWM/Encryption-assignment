// CLI.c
// Source file for the CLI functionality of our en-/decryption programme

#include "caesar.h"
#include "viginere.h"
#include <CLI.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool checkIfValid(int noOfArguments, char *mode, char *algo) {
  if (strcmp(algo, "V") != 0 && strcmp(algo, "C") != 0) {
    return false;
  } else if (strcmp(mode, "E") != 0 && strcmp(mode, "D") != 0) {
    return false;
  } else if (strcmp(algo, "C") == 0 && noOfArguments != 4) {
    return false;
  } else if (strcmp(algo, "V") == 0 && noOfArguments != 5) {
    return false;
  } else {
    return true;
  }
};

// void useTheRightAlgo

void printUsage(const char *programmeName) {
  printf("Usage: %s MODE ALGORITHM TEXT [KEY]\n", programmeName);
  printf("Modes:\n\n    e  Encrypt the input text\n    d  "
         "Decrypt the input text");
  printf("Algorithms:\n\n    c  Caesar cipher\n    v  "
         "Vigènere cipher\n");
  printf("Only use letters (A-Z) and do NOT use spaces in your message. The "
         "programme will only "
         "receive your message as one long word and if you use a space in your "
         "message everything after the space will not be included. Numbers and "
         "symbols will be deleted from message.");

  printf("\nExamples:\n\n%s e c MEETATYOURHOUSEATELEVEN\n\nResults in: "
         "YPHHWDWBRXUKRXVHDWHOHYHQ\n\n%s e v secretmessage "
         "goldengold\n\nResults in: YSNUIGSSDVGUP",
         programmeName, programmeName);
}

void applyModeAndAlgo(char *mode, char *algo, char *wordToProcess, char *Vkey) {
  switch (mode[0]) {
  case 'E':
    if (algo[0] == 'C') {
      caesarEncrypt(wordToProcess);
      break;
    } else {
      viginereEncrypt(wordToProcess, Vkey);
      break;
    };
  case 'D':
    if (algo[0] == 'C') {
      caesarDecrypt(wordToProcess);
      break;
    } else {
      viginereDecrypt(wordToProcess, Vkey);
      break;
    };
  default:
    puts("Invalid mode or algorithm\n");
    break;
  }
}