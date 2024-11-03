# Setting Up and Running C Code in VSCode on Windows 11

This guide covers the steps to create, compile, and execute C programs using Visual Studio Code on Windows 11.

## Prerequisites

1. Visual Studio Code installed.
2. C/C++ extension by Microsoft installed in VSCode.
3. LTS OpenJDK installed on your system. ( use install-lts-openjdk.md to install LTS OpenJDK )

## Setting Up on Windows 11

### Install GCC Compiler via MSYS2

1. Download and install [MSYS2](https://www.msys2.org/).

2. Launch MSYS2 MSYS from the Start menu.

3. Update the system package index and base packages:
```bash
pacman -Syu
```
   - Restart terminal if prompted and then run:
```bash
pacman -Su
```

4. Install the toolchain:
```bash
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```

5. Add MinGW to your system `PATH`:
   - Go to _System Properties_ -> _Environment Variables_.
   - Edit the `Path` variable and add: `C:\msys64\mingw64\bin`.

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
   - Press `Ctrl+Shift+P` to open the command palette.
   - Type `Tasks: Configure Default Build Task` and select `C/C++: g++.exe build active file` or `C/C++: gcc.exe build active file`.

5. **Compile**:
   - Press `Ctrl+Shift+B` to build the project.
   - An executable named `a.exe` will be created by default.

### Run the Program

1. Open the integrated terminal in VSCode (``Ctrl+` `` or `View -> Terminal`).
2. Run the executable:
```PowerShell
.\main.exe
```
3. You should see `Hello, World!` output.

## Additional Tips

- To specify an output filename during compilation, use the `-o` flag:
  - Windows:
```bash
 gcc main.c -o myprogram.exe
    .\myprogram.exe
```
