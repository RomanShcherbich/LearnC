# Setting Up and Running C Code in Linux

This guide covers the steps to create, compile, and execute C programs using Visual Studio Code on Linux.

## Prerequisites

1. Visual Studio Code installed.
2. C/C++ extension by Microsoft installed in VSCode.
3. LTS OpenJDK installed on your system. (use install-lts-openjdk.md to install LTS OpenJDK)

## Setting Up on Linux

### Install GCC Compiler

1. Open Terminal.
2. Run the following command to install GCC:
```bash
sudo apt update
sudo apt install build-essential
```

### Create and Compile C Code

1. **Open Vim**: Launch Vim editor.
2. **Create C File**: Inside `MyCProject`, create a new file named `main.c` and add the following sample code:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
3. **Compile**:
   - Run the following command to compile the C program:
```bash
gcc main.c -o myprogram
```
   - An executable named `myprogram` will be created in the same directory.
4. **Run the Program**:
   - Execute the compiled program:
```bash
./myprogram
```
