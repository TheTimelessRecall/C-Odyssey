<h1 align="center">🌊 C Odyssey</h1>

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" alt="C Logo" width="120">
  <h3>From "Hello World" to Memory Manipulation.</h3>
  <p>
    A roadmap for learning C programming. <br>
  </p>
</div>

<p align="center">
  <a href="https://github.com/TheTimelessRecall/C-Odyssey/actions/workflows/c-build.yml">
    <img src="https://github.com/TheTimelessRecall/C-Odyssey/actions/workflows/c-build.yml/badge.svg" alt="Build Status">
  </a>
  <img src="https://img.shields.io/badge/License-MIT-blue.svg" alt="License">
  <img src="https://img.shields.io/badge/Code%20Style-Google-orange" alt="Style">
</p>

## The Syllabus

### [01 Basics](./01_Basics)
*The absolute building blocks*
* **What's inside:** Variables, `printf`, `scanf`, simple math, ASCII.
* **Projects:** BMI Calculator, Temperature Converter.

### [02 Control Flow](./02_Control_Flow)
*Teaching the computer to make decisions.*
* **What's inside:** `if-else`, `switch` statements, loops (`for`, `while`).
* **Projects:** Leap Year Checker, Pattern Printing (Floyd's Triangle).

### [03 Number Logic](./03_Number_Logic)
*Algorithms involved in integer properties. Good for interview prep.*
* **What's inside:** Modulo operator, digit extraction, base conversion.
* **Projects:** Armstrong Numbers, Binary ↔ Decimal, Number to Words.

### [04 Arrays](./04_Arrays)
*Handling lists of data*
* **What's inside:** Indexing, memory layout, bounds checking.
* **Projects:** Reversing arrays, Finding Min/Max.

### [05 Searching & Sorting](./05_Searching_Sorting)
*Classic Computer Science algorithms you need to know.*
* **What's inside:** Efficient data retrieval and organization.
* **Projects:** Bubble Sort, Binary Search, Merge Sort.

### [06 Pointers & Memory](./06_Pointers_Memory)
*The "scary" stuff (that isn't actually that scary if you pay attention).*
* **What's inside:** Memory addresses, dynamic allocation (`malloc`/`free`), pointer arithmetic.
* **Projects:** Custom `atoi`/`itoa`, Sparse Matrix Compression.

### [07 Mini Projects](./07_Mini_Projects)
*Putting it all together into something usable.*
* **Tic-Tac-Toe:** Full game logic with 2D arrays.
* **Number Guessing Game:** Random generation and loops.

---


## Running this

I used a `Makefile` to keep things simple. No need to type `gcc` manually for every program.

1.  **Clone the Repo:**
    ```bash
    git clone https://github.com/TheTimelessRecall/C-Odyssey.git
    cd C-Odyssey
    ```

2.  **Compile everything:**
    ```bash
    make
    ```
    *This creates a `bin/` folder with all your executables inside.*

3.  **Run a program:**
    ```bash
    ./bin/tic_tac_toe
    ```
    *(Or whatever program you want to run)*

4.  **Clean up:**
    ```bash
    make clean
    ```

---

## Tic-Tac-Toe Demo

![Tic Tac Toe](media/tic_tac_toe_demo.gif)

---

## Want to Contribute?

1. Fork it.
2. Create your feature branch (`git checkout -b feature/AmazingFeature`).
3. **Format your code** using the included `.clang-format`.
4. Commit and Push.
5. Open a Pull Request.

