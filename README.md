# C++ OOP CGPA Calculator 🎓

A robust, console-based application written in standard C++ that calculates a student's Cumulative Grade Point Average (CGPA). This project was built to demonstrate core Object-Oriented Programming (OOP) principles and dynamic memory management without relying on external libraries.

## 🚀 Features
* **Object-Oriented Design:** Clean separation of logic using `Student` and `Course` classes.
* **Dynamic Memory Allocation:** Uses `new` and `delete` operators to dynamically size the course list based on user input, preventing wasted memory.
* **Robust Input Validation:** Ensures credit hours (1-6) and course counts (1-8) stay within realistic academic bounds.
* **Smart Grade Handling:** Accepts both uppercase and lowercase letter grades (A-F) via manual ASCII conversion, preventing user-input crashes.
* **Memory Safe:** Implements class destructors to properly free heap memory and prevent memory leaks.

## 🧠 Concepts Demonstrated
* **Encapsulation:** Keeping data like `creditHours` and `courseName` private and accessing them strictly through Getter and Setter methods.
* **Heap Allocation vs. Stack Allocation:** Managing dynamic arrays at runtime.
* **Algorithmic Calculation:** Computing weighted averages using Grade Points and Total Credits.

## 🛠️ How to Compile and Run
Since this project uses only standard C++ libraries (`<iostream>` and `<string>`), it can be compiled on any standard C++ compiler (like GCC or Clang).

**Using G++:**
1. Open your terminal.
2. Navigate to the folder containing the file.
3. Compile the code:
   `g++ main.cpp -o cgpa_calculator`
4. Run the executable:
   * **Windows:** `cgpa_calculator.exe`
   * **Mac/Linux:** `./cgpa_calculator`

## 📊 Example Output
```text
Enter Name of Student: John
Enter Number of Courses(1 - 8): 2

###  COURSE :  1 ###
Enter Course Name: Math
Enter Number of Credit Hours(1 - 6): 4
Enter Grade(A - F): A

###  COURSE :  2 ###
Enter Course Name: History
Enter Number of Credit Hours(1 - 6): 3
Enter Grade(A - F): B

=======================================
             STUDENT REPORT            
=======================================
Name: John

Course: Math   |   Credits: 4   |   Grade: A
Course: History   |   Credits: 3   |   Grade: B
---------------------------------------
Total Credits Attempted: 7
Final CGPA: 3.57143
=======================================
