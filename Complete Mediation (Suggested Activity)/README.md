## What To Do
You are to write a short program, in any language you like, that does the following:

1. Open testfile for reading for reading but do not read from it.

2. Turn off read permission for testfile. You can do this from within the program, or pause the program and do it any other way (and the resume the program execution). At this point, it is critical that you not be able to read from it.

3. Now read from the file, and print it out to determine if the read succeeds.

## Important Note
Whenever you start your program a second time, be sure you can read testfile; otherwise, your program will fail.

## Discussion. 
Did your program print the complete file? Why was it able to do so? If it did not, and only printed part of the file, why did it not print the entire file?

## Answer
The program is able to print the complete file because the operating system does not comply with the Principle of Complete Mediation, that is, the OS checks if the user has permission to read the file only when opening in read mode with `open(file_path, 'r')`. After that, even if the permission changes, the OS allow  the execution of any action that requires the read-only permission. Following the Principle of Complete Mediation, the OS should check that the user has the proper permissions before each action performed.