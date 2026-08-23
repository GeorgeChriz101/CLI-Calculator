# Proj1-CLI Calculator

A simple command-line calculator built in C++ as my first step into building and 
shipping real projects — part of a personal challenge to stop overthinking and 
just start building.

## Features

- Basic arithmetic: addition, subtraction, multiplication, division
- Continuous operation loop (no restarting the program for each calculation)
- Input validation and error handling (e.g. divide-by-zero, invalid input)

## How to Run

Make sure you have a C++ compiler installed (g++ recommended).

```bash
git clone https://github.com/<your-username>/cli-calculator-cpp.git
cd cli-calculator-cpp
g++ calculator.cpp -o calculator
./calculator
```

## Example Usage

Welcome to CLI Calculator!
Enter first number: 10
Enter operator (+, -, *, /): /
Enter second number: 2
Result: 5

Calculate again? (y/n): n


## What I Learned

- Basics of structuring a C++ program with functions
- Handling user input safely (bad input, divide by zero)
- Setting up and using Git/GitHub from the terminal for version control

## What's Next

- Add support for more operations (exponents, modulus)
- Add a calculation history log
- Rebuild as a web version using HTML/CSS/JavaScript

## Tech Stack

- **Language:** C++
- **Tools:** g++, Git, WSL
