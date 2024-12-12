# 🧮 Fraction Operations in C++

> **A comprehensive class implementation for fraction (`kasr`) manipulation using C++ operator overloading.**

---

## 🚀 Features

### 🔧 Class Functionality
- **Fraction Arithmetic:** Perform addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`).
- **Comparison Operators:** Supports `<`, `>`, and `==` for easy fraction comparison.
- **Unary Operators:** Includes unary minus (`-`) for negating fractions.
- **Increment Operators:** Implements both prefix (`++x`) and postfix (`x++`) increment for fractions.
- **Type Conversion:** Converts fractions to `float` seamlessly.

### 🛠 Operator Overloading
- Streamlined input (`>>`) and output (`<<`) operators for intuitive I/O.
- Arithmetic and logical operations designed for simplicity and flexibility.

### 📚 Friend Functions
- Input/Output management using `istream` and `ostream` overloading.

---

## 📜 How It Works
1. **Class Definition:** Encapsulates `surat` (numerator) and `makhraj` (denominator) with validation.
2. **Custom Operations:**
   - Overloads common operators for mathematical and logical operations.
   - Fraction-to-float conversion for numerical operations.
3. **Main Program:**
   - Takes user input for fractions.
   - Demonstrates various operations such as addition, multiplication, comparison, and type casting.

---

## 🖥️ Example Usage
### Input:
```bash
surat: 3
makhraj: 4
surat: 5
makhraj: 6
surat: 7
makhraj: 8
```

### Output:
```bash
3/4
0.75

obj1 = 3/4
obj2 = 7/4

obj1 is less than obj2

obj1 after unary minus operator overloading: -3/4

obj * obj2 = -21/16

obj / obj2 = -9/28

obj + obj2 = 25/16

obj - obj2 = -13/16

obj1 is not equal to obj2 (obj != obj2)

obj3 = 7/8
```

---

## 🔧 Setup & Usage
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/fraction-operations.git
   ```
2. Navigate to the project directory:
   ```bash
   cd fraction-operations
   ```
3. Compile the code:
   ```bash
   g++ -o fraction_operations fraction_operations.cpp
   ```
4. Run the program:
   ```bash
   ./fraction_operations
   ```

---

## ✨ Visual Overview

| **Feature**              | **Operator** | **Example**           |
|--------------------------|--------------|-----------------------|
| Addition                 | `+`          | `a + b`               |
| Subtraction              | `-`          | `a - b`               |
| Multiplication           | `*`          | `a * b`               |
| Division                 | `/`          | `a / b`               |
| Unary Minus              | `-`          | `-a`                  |
| Prefix Increment         | `++`         | `++a`                 |
| Postfix Increment        | `++`         | `a++`                 |
| Comparison (Less Than)   | `<`          | `a < b`               |
| Comparison (Greater Than)| `>`          | `a > b`               |
| Equality Check           | `==`         | `a == b`              |
| Type Conversion          | `float()`    | `float(a)`            |

---

## 📬 Contributions
We welcome contributions! Feel free to fork this repository and submit pull requests. 😊

---

## 📜 License
This project is licensed under the MIT License.

