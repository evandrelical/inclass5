inclass5
========
In-Class Activity #5
CISC221, 2014


-Learning Objectives-
(Content) This activity should help the learner:
1. Better understand the limits that a computer’s Instruction Set Architecture can impose on program performance on a given computer architecture.
2. Apply appropriate optimization techniques relating to loop inefficiencies, procedure call, and memory references.


-Activity Background-
In this activity you are provided with a short C program. Your job is to optimize the given code, and run before and after performance tests to quantify your optimization efforts. You will use the program “rpistat <program name>” to generate performance information.
Section A.
1. At least one member of your team must use a laptop to log into the raspberry pi assigned to your team.
2. Retrieve the file icas6.c from /cas/course/ydrive/cisc221 in the CASLAB domain.
3. Compile the program using the command: gcc –O0 –o icas6 icas6.c.
4. To establish a baseline performance measurement, enter the command: rpistat icas6.
5. The rpistat program will create the output file: rpistat.txt. Rename this file icas6.txt (cp rpistat.txt icas6.txt)
6. Make a copy of the program and name it icas6opt.c. Optimize this version of the program by modifying the icas6 function. Do not alter any other sections of the program.
7. After every optimization that you make, recompile the program and run rpistat to see the performance benefit (if there is one) of your optimization attempt over the original version. Concentrate on the innermost loop of the function as that is where most if not all of the gains will be made.
8. When your team is confident that you have squeezed as much performance as possible from the program, fill in the function summary sheet included with this document.
