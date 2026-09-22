# Student Grading System

A simple C++ program that calculates a student's average marks and assigns a grade based on their performance.

## Description

The Student Grading System allows the user to:

- Enter a student's name
- Enter student'class
- Enter the number of subjects
- Enter marks for each subject
- Calculate the total marks
- Calculate the average mark
- Assign a grade
- Display a student performance report

## How It Works

1. The program asks for the student's name.
2. The user enters the number of subjects.
3. The program asks for the mark of each subject.
4. The marks are added together to calculate the total.
5. The program calculates the average mark.
6. The average is used to determine the student's grade.
7. A performance report is displayed.

## Input Validation

The program also validates user input.

- The number of subjects must be greater than 0.
- Marks must be between 0 and 100.
- If an invalid mark is entered, the program stops instead of continuing with an incorrect calculation.

## Concepts Practiced

This project helped me practice:

- Variables and data types
- `std::string`
- `getline()`
- `std::cin` and `std::cout`
- `if` statements
- `for` loops
- Input validation
- Arithmetic operations
- Error handling
- `return 1`
- Basic program structure

## What I Learned

While building this project, I gained a better understanding of loops, input validation, error handling, conditional statements, and working with user input.

I also learned how individual C++ concepts can work together to build a complete program.

## Example

```text
=== Welcome to Student Grading System ===

Enter Student Name: John
Enter student class: grade 2
Enter Number of Subjects: 5

Enter mark for subject 1: 75
Enter mark for subject 2: 82
Enter mark for subject 3: 68
Enter mark for subject 4: 90
Enter mark for subject 5: 80

---------------------------
Student Performance Report
---------------------------
Name: John
Class: grade 2 
Average: 79
Grade: B,(Good work!)
---------------------------