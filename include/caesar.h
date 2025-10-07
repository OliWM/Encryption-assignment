/**
 * @file caesar.h
 * @brief Encrypts or decrypts a message with caesar cipher
 *
 * Shifts every letter in the message by 3 places in alphabet and loops around
 * if +3 places would result in an ASCII outside the alphabet (or -3 for
 * decryption)
 */

#ifndef caesar_h
#define caesar_h

/**
 * @brief Encrypts message with caesar cipher
 *
 * @param wordToEncrypt  The message to be encrypted, from CLI.

 */
void caesarEncrypt(char *wordToEncrypt);

/**
 * @brief Decrypts message with caesar cipher
 *
 * @param wordToDecrypt  The message to be Decrypted, from CLI.

 */

void caesarDecrypt(char *wordToDecrypt);

#endif