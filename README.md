# Taste of India Restaurant Billing System

## About the Project

The Taste of India Restaurant Billing System is a console-based application developed using the C programming language. It allows users to select food items, enter quantities, calculate the total amount, and generate the final bill including 5% GST.

## Features

- Displays a restaurant menu with five food items and their prices.
- Accepts the user's item choice and quantity.
- Calculates the amount for each selected item.
- Maintains a running total of the order.
- Validates quantities and rejects zero or negative values.
- Handles invalid menu choices.
- Calculates 5% GST on the subtotal.
- Displays the subtotal, GST, and final bill.

## Menu

| Food Item | Price |
|---|---:|
| Butter Chicken | ₹220 |
| Chicken Chilly | ₹180 |
| Naan | ₹30 |
| Chicken 65 | ₹200 |
| Tandoori Chicken | ₹250 |

## Technologies Used

- C Programming Language
- Standard Input/Output (`stdio.h`)
- Variables and data types
- `do-while` loop
- `switch-case` statement
- `if` statement for quantity validation
- Arithmetic and assignment operators
- Formatted input and output using `scanf()` and `printf()`

## How to Compile and Run

### Prerequisites

- GCC compiler
- Visual Studio Code or another code editor (optional)

### Steps

1. Clone or download this repository.
2. Open the project folder in your terminal.
3. Compile the program using GCC:

   ```bash
   gcc bill.c -o bill
   ```

4. Run the program on Windows:

   ```bash
   .\bill.exe
   ```

   On Linux/macOS:

   ```bash
   ./bill
   ```

## Sample Calculation

For an order with the following items:

- Butter Chicken: 2 × ₹220 = ₹440
- Naan: 2 × ₹30 = ₹60

The bill will be calculated as follows:

- **Subtotal:** ₹500
- **GST (5%):** ₹25
- **Final Bill:** ₹525

## Learning Objectives

This project demonstrates the practical use of fundamental C programming concepts, including variables, data types, user input, loops, conditional statements, switch-case statements, arithmetic operations, and basic billing calculations.

## Future Improvements

- Add customer details.
- Display a complete item-wise order summary on the final bill.
- Save bills using file handling.
- Improve input validation for non-numeric inputs.
- Add receipt generation and date/time details.

## Author

Bhoomika Kalra

## Project Type

Academic Project — MCA C Programming
