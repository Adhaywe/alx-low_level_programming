# 0x09-static_libraries
## Learning Objectives
- What is a static library 
- how does it work
- how to create one
- how to use it
- Basic usage of ar, ranlib, nm
## Requirements
- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with Betty
## Files
The following files are included in this repository:
| Filename | Description |
|----------|-------------|
| libmy.a | Create the static library libmy.a containing containing different funcitons |
| create_static_lib.sh | Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory |
