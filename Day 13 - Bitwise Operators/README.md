# Day 13: Bitwise Operators

## Theory and Description

Bitwise operators perform operations directly on the individual bits of integer data types at the hardware level. They are extremely fast and are primarily used in embedded systems, cryptography, and performance-critical applications.

### Types of Bitwise Operators
1. **Bitwise AND (`&`)**: Returns 1 if both corresponding bits are 1, else 0.
2. **Bitwise OR (`|`)**: Returns 1 if at least one corresponding bit is 1, else 0.
3. **Bitwise XOR (`^`)**: Returns 1 if corresponding bits are different, else 0.
4. **Bitwise NOT (`~`)**: Inverts all bits (1s become 0s, 0s become 1s).
5. **Left Shift (`<<`)**: Shifts bits to the left by a specified number of positions, padding with zeros on the right. Effectively multiplies the number by 2^n.
6. **Right Shift (`>>`)**: Shifts bits to the right by a specified number of positions. Effectively divides the number by 2^n.

### Block Diagram: Bitwise AND

```mermaid
graph TD
    A[A: 0101 (5)] --> C{A & B}
    B[B: 0011 (3)] --> C
    C --> D[Result: 0001 (1)]
```

## Features and Differences

### Logical Operators vs Bitwise Operators
- **Logical Operators (`&&`, `||`)**: Evaluate entire conditions (True/False). If the first operand of an `&&` is false, it short-circuits and doesn't check the second.
- **Bitwise Operators (`&`, `|`)**: Evaluate every single bit within the variable. They never short-circuit.

---

## Assignment Questions and Answers

**Q1. Write a program to check if a number is even or odd using a bitwise operator.**
*Answer*:
```c
#include <stdio.h>

int main() {
    int num = 4;
    if ((num & 1) == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    return 0;
}
```

**Q2. What is the effect of left shifting a number by 1 bit?**
*Answer*: Left shifting an integer by 1 bit (`num << 1`) is mathematically equivalent to multiplying the number by 2. It is generally faster than using the standard multiplication `*` operator.

**Q3. How can you toggle (flip) the 3rd bit of a number?**
*Answer*: You can use the Bitwise XOR operator `^` along with a bitmask. The bitmask should have a 1 only at the 3rd bit position (which is 1 shifted left by 2 positions: `1 << 2`).
`num = num ^ (1 << 2);`
