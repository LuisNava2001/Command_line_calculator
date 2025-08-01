# 🧮 Command-Line Calculator in C

A simple, beginner-friendly command-line calculator written in **C**. This project is ideal for practicing input handling, function creation, loops, and basic arithmetic logic.

## 📌 Notes

- Addition
- Subtraction
- Multiplication
- Division (with zero-check to prevent division by zero)
- Power (exponentiation)
- Factorial (supports only non-negative integers)
- Input validation with helpful prompts for invalid entries
- Easy to compile and run on any system with GCC

## 📁 Project Structure
```
command-line-calculator/
├── calculator.c # Main source code
├── README.md # Project documentation
└── LICENSE # MIT License
```

## 🚀 How to Compile and Run

### 🔧 Option 1: Using GCC

 Make sure you have `gcc` installed.

```bash
gcc calculator.c -o calculator -lm
./calculator

-lm links the math library, required for the pow() function.
```

## 🕹️ How to Use
 Once the program is compiled and running, follow the on-screen menu to perform calculations.

```
======== Command-Line Calculator ========
Choose an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Power
6. Factorial
7. Exit
Enter your choice:
```

### ✅ Steps
```
Enter a number (1–7) to select the desired operation.

Input the required values (e.g., two numbers for addition, one number for factorial).

The result will be printed on the screen.

After the result, you'll be returned to the main menu.

Choose 7 to exit the calculator.
```

## 👤 Author

### Luis Nava | LuisNava2001
```
I'm exploring and sharing simple C projects.
Feel free to open an issue, suggest features, or fork this repository!


Copyright (c) 2025 Luis Nava | LuisNava2001
```
