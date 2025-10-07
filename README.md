A simple command-line cryptography tool written in C.
Supports both Caesar and Vigenère ciphers for encryption and decryption.
Includes input validation, text cleaning, and modular design with documented header files.


## Compile and run
To compile quick and dirty with clang just

```bash
#for macOs/Linux
clang -std=gnu2y -g -o main src/main.c
```
or
```bash
#for Windows (I think this is how)
clang -std=gnu2y -g -o main.exe src/main.c
```

And then run
```bash
#for macOs/Linux
./main
```
Or
```cmd
#for Windows (I think this is how)
main.exe
```

## Flowchart
![Flowchart of Encryption](https://i.imgur.com/zCZvfQg.png)
