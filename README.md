# simple_shell

A simple UNIX command interpreter making as a final project of the low-level programming and algorithm quarter at ALX school of software engineering



Overview

Sodashy is a sh-compatible command language interpreter that executes commands read from the standard input or from a file.



Invocation

Usage: Sodash Sodash is started with the standard input connected to the terminal. To start, compile all .c located in this repository by using this command:



gcc -Wall -Werror -Wextra -pedantic *.c -o sodash ./sodash Sodash is allowed to be invoked interactively and non-interactively. If sodash is invoked with standard input not connected to a terminal, it reads and executes received commands in order.



Example:

$ echo "echo 'holberton'" | ./sodash 'holberton' $ When sodash is invoked with standard input connected to a terminal (determined by isatty(3), the interactive mode is opened. sodash Will be using the following prompt ^-^ .

Builtin Commands

cd

Usage: cd [DIRECTORY] Changes the current directory of the process to DIRECTORY. If no argument is given, the command is interpreted as cd $HOME. If the argument - is given, the command is interpreted as cd $OLDPWD and the pathname of the new working directory is printed to standad output. If the argument, -- is given, the command is interpreted as cd $OLDPWD but the pathname of the new working directory is not printed. The environment variables PWD and OLDPWD are updated after a change of directory. Example:



$ ./sodash ^-^ pwd /home/vagrant/holberton/simple_shell $ cd ../ ^-^ pwd /home/vagrant/holberton ^-^ cd - ^-^ pwd /home/vagrant/holberton/simple_shell



exit Usage: exit [STATUS] Exits the shell. The STATUS argument is the integer used to exit the shell. If no argument is given, the command is interpreted as exit 0. Example:



$ ./sodash $ exit



env

Usage: env Prints the current environment. Example:



$ ./sodash $ env NVM_DIR=/home/vagrant/.nvm ...



setenv

Usage: setenv [VARIABLE] [VALUE] Initializes a new environment variable, or modifies an existing one. Upon failure, prints a message to stderr. Example:



$ ./sodash $ setenv NAME Alx $ echo $NAME Alx



unsetenv

Usage: unsetenv [VARIABLE] Removes an environmental variable. Upon failure, prints a message to stderr. Example:



$ ./sodash $ setenv NAME Holberton $ unsetenv NAME $ echo $NAME

Authors
Oyeyinka Dairo nirvanarockoak@gmail.com   David Abegunde abegundedavid17@gmail.com