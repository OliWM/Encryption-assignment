/**
 * @file CLI.h
 * @brief Command-line interface for our encryption/decryption program.
 *
 * Checks if arguments for main are valid, prints usage if not and makes sure
 * the right mode and algorithm is aplied depending on the arguments.
 */

#ifndef CLI_h
#define CLI_h

/**
 * @brief Checks whether the provided arguments are valid.
 *
 * @param noOfArguments  The number of command-line arguments.
 * @param mode           The operation mode ("E" for encrypt, "D" for decrypt).
 * @param algo           The algorithm ("C" for Caesar, "V" for Vigenère).
 * @return true if the arguments are valid, false otherwise.
 */
bool checkIfValid(int noOfArguments, char *mode, char *algo);

/**
 * @brief Prints usage instructions for the program.
 *
 * @param programmeName  The name of the program (usually argv[0]).
 */
void printUsage(const char *programmeName);

/**
 * @brief Applies the selected algorithm and mode to the input text.
 *
 * @param mode           The operation mode ("E" or "D").
 * @param algo           The algorithm ("C" or "V").
 * @param wordToProcess  The text to encrypt or decrypt.
 * @param Vkey           The key for Vigenère (ignored for Caesar).
 */
void applyModeAndAlgo(char *mode, char *algo, char *wordToProcess, char *Vkey);

#endif