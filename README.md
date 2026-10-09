# 42 Piscine — C and Shell Exercises

A learning archive of C programming and shell exercises, organised by exercise module.

## Contents

| Directory | Practice area |
| --- | --- |
| [C00](C00) | Character output, loops and number printing |
| [C01](C01) | Pointers, swapping and integer arrays |
| [C02](C02) | String copying, character checks and case conversion |
| [C03](C03) | String comparison, concatenation and search |
| [C04](C04) | String length, output and integer conversion |
| [C05](C05) | Iteration, recursion, factorials, powers and prime numbers |
| [C06](C06) | Command-line arguments |
| [Shell00](Shell00) | Files, permissions and basic shell/Git commands |

## Inspect and compile

Many exercises define a function without a `main` entry point. Compile those as objects or write a separate test harness.

For example:

```bash
cc -Wall -Wextra -Werror -c C01/ex02/ft_swap.c -o /tmp/ft_swap.o
```

For an exercise containing a standalone `main`:

```bash
cc -Wall -Wextra -Werror C06/ex00/ft_print_program_name.c -o /tmp/print_program_name
/tmp/print_program_name
```

Use a Unix-like environment with a C compiler. These commands are examples for inspecting individual exercises; no complete build system is included.

## Scope

The repository records practice with programming fundamentals. It does not represent a complete application, and no overall course-completion or exercise-pass result is claimed.

Read and understand each solution before using it as a learning reference.

