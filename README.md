*This project has been created as part of the 42 curriculum by thiferre.*

# Push_swap

![Language](https://img.shields.io/badge/language-C-blue.svg)

## Description

**Push_swap** is a highly efficient algorithmic project from the 42 School curriculum. The challenge is to sort a stack of integers using a limited set of instructions, with the absolute minimum number of operations possible.

The program, named `push_swap`, takes a set of integers as arguments and outputs the precise sequence of stack manipulation instructions required to sort them in ascending order. This project dives deep into sorting algorithms, complexity analysis (Big O notation), and stack data structures.

The sorting strategy implemented depends on the input size:
*   **3 numbers:** Hardcoded permutation logic.
*   **5 numbers:** A "push-min" strategy combined with the 3-number sort.
*   **100+ numbers:** A **Radix Sort** algorithm using bitwise operations (LSD Base 2) to efficiently sort large datasets.

## Instructions

### Compilation

The project includes a robust `Makefile` for compilation.

*   **Compile the program:**
    ```bash
    make
    ```
    This generates the `push_swap` executable.

*   **Clean object files:**
    ```bash
    make clean
    ```

*   **Full cleanup (objects and executable):**
    ```bash
    make fclean
    ```

*   **Recompile:**
    ```bash
    make re
    ```

### Execution

Run the program by passing a list of integers as arguments. They can be separate arguments or a single string.

**Standard usage:**
```bash
./push_swap 2 1 3 6 5 8
```
Output: The program will print the operations needed to sort the stack, line by line:

```Text
sa
pb
pb
ra
...
```

### Error Handling
The program is designed to be robust. It displays Error (followed by a newline) on the standard error output if:

* Arguments contain non-numeric characters (e.g., 1 2 a).
* Arguments contain duplicate numbers (e.g., 1 2 2).
* Arguments exceed integer limits (> INT_MAX or < INT_MIN).

## Resources
### References
* Radix Sort Algorithm - GeeksforGeeks
* Push Swap Tutorial - Medium
* Bitwise Operators in C

### AI Usage
Artificial Intelligence (GitHub Copilot) was utilized in this project to enhance development efficiency in the following ways:

Code Scaffolding: Generating the initial directory structure, Makefile, and header protection macros.
Norminette Compliance: Suggesting refactoring strategies to reduce function line counts (e.g., optimizing while loops and variable assignments) to meet the strict 25-line limit.
Edge Case Detection: Identifying a critical bug in the find_highest function where initializing with INT_MIN could cause failure if the input contained only that specific integer.
Test Generation: Creating a comprehensive evaluation checklist and bash one-liners to verify the instruction count against the project's grading scale.
The core logic of the sorting algorithms (Radix and Tiny Sort) was manually implemented and verified to ensure full understanding of the underlying complexity.