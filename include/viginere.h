/**
 * @file viginere.h
 * @brief Encrypts or decrypts a message with viginere cipher
 *
 * Takes a repeating keyword. Shifts each letter in the message by the ASCII -
 * 'A' value of the corresponding letter in the key.
 */

#ifndef viginere_h
#define viginere_h

/**
 * @brief Encrypts a message using the Vigenère cipher.
 * @param wordToEncrypt The text to encrypt (A–Z only).
 * @param key The key used for encryption (A–Z only).
 */
void viginereEncrypt(char *wordToEncrypt, char *key);

/**
 * @brief Decrypts a message using the Vigenère cipher.
 * @param wordToDecrypt The text to decrypt (A–Z only).
 * @param Dkey The key used for decryption (A–Z only).
 */
void viginereDecrypt(char *wordToDecrypt, char *Dkey);

#endif