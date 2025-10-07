// CLI.c
// Source file for the CLI functionality of our en-/decryption programme

#include <CLI.h>
#include <stdio.h>

void printUsage(const char *programmeName) {
  printf("Usage: %s MODE ALGORITHM TEXT [KEY]\n", programmeName);
  printf("Modes:\n\n    e, encrypt  Encrypt the input text\n    d, decrypt  "
         "Decrypt the input text");
  printf("Algorithms:\n\n    c, caesar  Caesar cipher\n    v, vigenere  "
         "Vigènere cipher");
  printf("Only use letters (A-Z) and do NOT use spaces in your message. The programme will only "
         "receive your message as one long word and if you use a space in your "
         "message everything after the space will not be included. Numbers and "
         "symbols will be deleted from message.");

  printf(
      "Examples:\n\n%s e c MEETATYOURHOUSEATELEVEN\n%s d v BLABLABLABLA HONEY",
      programmeName, programmeName);
}
// insert something to decrypt when you have made the rest of the programme and
// also what the result would be for ease of use
