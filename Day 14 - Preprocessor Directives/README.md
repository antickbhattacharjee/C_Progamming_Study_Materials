# Day 14: Preprocessor Directives

## Theory and Description

The C Preprocessor is a macro processor that transforms your program before it is passed to the compiler. Preprocessor directives begin with a `#` symbol and are not true C statements (so they don't end with a semicolon).

### Common Directives
1. **`#include`**: Inserts the contents of a specified file (like standard libraries or custom headers) into the current file.
   - `#include <stdio.h>` (for standard libraries)
   - `#include "myfile.h"` (for user-defined header files)
2. **`#define`**: Defines a macro. It can define constant values or macro functions.
3. **`#undef`**: Undefines a previously defined macro.
4. **Conditional Compilation**: `#ifdef`, `#ifndef`, `#if`, `#else`, `#elif`, `#endif`. These allow certain parts of the code to be compiled only if specific conditions are met.

### Block Diagram: Compilation Process

```mermaid
graph LR
    A[Source Code .c] -->|Preprocessor| B[Expanded Code .i]
    B -->|Compiler| C[Assembly Code .s]
    C -->|Assembler| D[Object Code .o]
    D -->|Linker| E[Executable .exe]
```

## Features and Differences

### Macro Functions vs Inline Functions
- **Macro Functions (`#define SQUARE(x) x*x`)**: Expanded by the preprocessor via text substitution. Faster but prone to errors (like side effects if passed `x++` or operator precedence issues).
- **Inline Functions (`inline int square(int x)`)**: Expanded by the compiler. Type-safe and much safer to use than macros while maintaining similar performance.

---

## Assignment Questions and Answers

**Q1. What is the purpose of `#ifndef` in header files?**
*Answer*: `#ifndef` (If Not Defined) is used as an include guard. It prevents a header file from being included multiple times in the same project, which would otherwise cause "redefinition" compilation errors.

**Q2. Write a macro to find the maximum of two numbers.**
*Answer*:
```c
#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    printf("Max is: %d", MAX(x, y));
    return 0;
}
```

**Q3. Explain the difference between `#include <file.h>` and `#include "file.h"`.**
*Answer*: Using angle brackets `< >` tells the preprocessor to search for the file in the compiler's standard system directories. Using double quotes `" "` tells the preprocessor to first search in the current directory containing the source file, and if not found, then search the standard system directories.
