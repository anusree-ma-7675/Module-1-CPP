# Module 1 Programming Foundations in C++ (Part 1-4)-Assignment Submission.
BCA Semester 1 Assignment
Student name : Anusree MA

## 1.6 Identify the Parts
- #include <iostream> -> the header file
- using namespace std; -> namespace directive
- int main() -> the main function
- cout << "Welcome to C++"; -> the statement
- return 0; -> return statement 

## 1.7 Errors
1. Missing a semicolon after 'using namespace std'
2. Missing a semicolon after the cout statement

## 1.8 Output Prediction
Output: ABC
Reason: There are no newlines (endl or \n) between the statements.

## 2.8 answer the questions
1. Which datatype would you use to store a student's roll number?
- int
2. Which datatype would you use to store a student's CGPA?
- Float or double
3. Which datatype would you use to store whether a student has passed or failed?
- bool

## 3.7 Practice answers
1. Declare a variable to store temperature, then assign it a value on the next line.  
   ```cpp
   float temperature;
   temperature = 22.5;
   ```
2. Create a constant for number of days in a week.
   const int days_in_week = 7;
3. What is wrong with: const int MAX;?
- A constant must be initialized when it is declared , therefore cont int MAX; is incorrect because it has no initial value.


## 4.12 Practice answers
2. Predict the output of a program with a cin >> int followed directly by getline() without cin.ignore(). 
- the getline() statement will be skipped and read an empty string.

## 5.10 Output Prediction Practice
cout << 7 / 2;       // ?  ➜   3

cout << 7 % 2;       // ?  ➜   1

cout << 7.0 / 2;     // ?  ➜   3.5

cout << (5 == 5);    // ?  ➜   1

cout << (5 != 5);    // ?  ➜   0

int x = 5;                
cout << x++ << " " << x;  //?  ➜  "5 6"

## 6.5 Practice - Predict the Output
cout << 10 + 5 * 2;       // ?  ➜  20

cout << (10 + 5) * 2;     // ?  ➜  30

cout << 20 - 4 / 2;       // ?  ➜  18

cout << (20 - 4) / 2;     // ?  ➜  8

cout << 2 + 3 * 4 - 1;    // ?  ➜  13   