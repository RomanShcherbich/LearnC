# Setting Up and Running C Code in VSCode on macOS

This guide covers the steps to create, compile, and execute C programs using Visual Studio Code on both macOS and Windows 11.

## Prerequisites

1. Visual Studio Code installed.
2. C/C++ extension by Microsoft installed in VSCode.
3. LTS OpenJDK installed on your system. ( use install-lts-openjdk.md to install LTS OpenJDK )

## Setting Up on macOS

### Install Xcode Command Line Tools

1. Open Terminal.
2. Run the following command to install Xcode Command Line Tools, which includes `gcc`:
```bash
xcode-select --install
```

### Create and Compile C Code

1. **Open VSCode**: Launch Visual Studio Code.

2. **Create a Project Folder**: Create a directory for your project, e.g., `MyCProject` and open it in VSCode.

3. **Create C File**: Inside `MyCProject`, create a new file named `main.c` and add the following sample code:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
4. **Configure Build Task**:
   - Press `Cmd+Shift+P` to open the command palette.
   - Type `Tasks: Configure Default Build Task` and select `C/C++: gcc build active file`.

5. **Compile**:
   - Press `Cmd+Shift+B` to build the project. This will use `gcc` to compile your program.
   - An executable named `main` will be created by default.

### Run the Program

1. Open the integrated terminal in VSCode (``Ctrl+` `` or `View -> Terminal`).
2. Run the executable:
```bash
./main
```
3. You should see `Hello, World!` output.

## Additional Tips

- To specify an output filename during compilation, use the `-o` flag:
  - macOS:
```bash
 gcc main.c -o myprogram
    ./myprogram
```