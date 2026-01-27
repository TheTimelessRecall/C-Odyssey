<h1 align="center">🌊 C Odyssey</h1>

<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" alt="C Logo" width="120">
  <p>
    For learning C programming. <br>
  </p>
</div>

<p align="center">
  <a href="https://github.com/TheTimelessRecall/C-Odyssey/actions/workflows/c-build.yml">
    <img src="https://github.com/TheTimelessRecall/C-Odyssey/actions/workflows/c-build.yml/badge.svg" alt="Build Status">
  </a>
  <img src="https://img.shields.io/badge/License-MIT-blue.svg" alt="License">
  <img src="https://img.shields.io/badge/Code%20Style-Google-orange" alt="Style">
</p>


## Content



| Section | What you gonna Learn | Projects |
| --- | --- | --- |
| **[01 Basics](./01_Basics)** | basics like variables, printing text, taking input, and doing simple math. | BMI Calculator, Temp Converter |
| **[02 Control Flow](./02_Control_Flow)** | making decisions using if statements and loops. | Leap Year Checker, Pattern Printing |
| **[03 Number Logic](./03_Number_Logic)** | Algorithms for handling integers and digits. | Armstrong Numbers, Binary ↔ Decimal |
| **[04 Arrays](./04_Arrays)** | Working with lists of data, handling indexes, and checking memory bounds. | Reversing Arrays, Finding Min/Max |
| **[05 Searching & Sorting](./05_Searching_Sorting)** | computer science algorithms for finding and organizing data efficiently. | Bubble Sort, Binary Search |
| **[06 Pointers & Memory](./06_Pointers_Memory)** | Understanding memory addresses and how to manually allocate memory without crashing. | Custom atoi, Sparse Matrix |
| **[07 Mini Projects](./07_Mini_Projects)** | Combining all the previous topics to build actual functional games. | Tic-Tac-Toe, Number Guesser |



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

## Where to Learn C

### Course
* **[CS50x (Harvard)](https://cs50.harvard.edu/x/):** The gold standard. It is free, difficult, and covers the computer science concepts

### Youtube Playlist
* **[Jacob Sorber](https://www.youtube.com/c/JacobSorber/videos):** A computer science professor who explains *exactly* what happens in memory

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

