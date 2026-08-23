# Proj1 - CLI Calculator

A simple command-line calculator built in C++ as one of my first projects focused on learning by building.

The goal of this project was to practice basic C++ concepts, improve input handling, and get more comfortable building and running programs from the terminal.

## Features

- Addition, subtraction, multiplication, and division
- Continuous calculation loop
- Handles invalid number input
- Handles invalid operators
- Prevents division by zero
- Allows the user to keep calculating without restarting the program
- Allows the user to exit when finished

## How to Run

Make sure you have a C++ compiler installed. `g++` is recommended.

```bash
git clone https://github.com/<your-username>/cli-calculator-cpp.git

cd cli-calculator-cpp

g++ calculator.cpp -o calculator

./calculator
```

## Example Usage

Enter first number: 10
Enter an operator (+, -, *, /): /
Enter second number: 2

Result: 5

Would you like to calculate again? (y/n): y

Enter first number: 20
Enter an operator (+, -, *, /): *
Enter second number: 4

Result: 80

Would you like to calculate again? (y/n): n

Calculator closed.


The program also handles mistakes without immediately crashing or exiting.

Enter first number: hello
Invalid input. Please enter a number: 10

Enter an operator (+, -, *, /): %
Invalid operator. Enter +, -, *, or /: +

Enter second number: 5

Result: 15


## What I Learned

- Using variables and different C++ data types
- Taking user input with `cin`
- Displaying output with `cout`
- Using `if` statements for validation
- Using `switch` statements for different operations
- Using `while` loops to keep a program running
- Handling bad user input with `cin.clear()` and `cin.ignore()`
- Preventing divide-by-zero errors
- Using Git and GitHub to track and share a project

## What's Next

- Add modulus `%`
- Add exponent calculations
- Add square root support
- Add calculation history
- Refactor repeated input validation into functions
- Allow commands such as `quit` or `exit`
- Eventually rebuild the calculator with a graphical or web interface

## Tech Stack

- **Language:** C++
- **Compiler:** g++
- **Version Control:** Git / GitHub
- **Environment:** WSL / Linux Terminal
