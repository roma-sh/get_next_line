# Get Next Line

### Reading a line from a file descriptor, simplified!

## Summary

The **Get Next Line** project is designed to implement a convenient function that reads a line from a file descriptor (fd) one line at a time. This function will be a valuable addition to any C programming toolbox and introduces the concept of static variables in C.

## Project Specifications

The `get_next_line()` function reads a line from the specified file descriptor and returns it, handling one line at a time with each call. The function is intended to handle text files as well as standard input.

### Key Requirements

- **Return Value**: `get_next_line()` returns the line read, including the newline character `\n`. If there is nothing left to read or an error occurs, the function returns `NULL`.
- **Usage**:
  - Function must work correctly for files and standard input.
  - Each line should include the terminating newline character, except at the end of a file that doesn’t end with a newline.
  - Auxiliary helper functions are placed in `get_next_line_utils.c`.

### Limitations

- **Undefined Behavior**:
  - If the file descriptor content changes between calls and `read()` hasn’t reached the end, `get_next_line()` may exhibit undefined behavior.
  - Undefined behavior may also occur when reading binary files.
- **Restrictions**:
  - Usage of `libft` is not permitted.
  - Functions using `lseek()` or global variables are forbidden.

## Bonus Features

If the mandatory requirements are complete, explore these bonus features:

- **Static Variable**: Refactor `get_next_line()` to use only one static variable.
- **Multi-FD Management**: Enable `get_next_line()` to handle multiple file descriptors simultaneously, preserving reading order for each file descriptor.

## Forbidden Functions

- `lseek()`
- Global variables

## Compilation

To compile the project, use the provided `Makefile`:
```bash
make
