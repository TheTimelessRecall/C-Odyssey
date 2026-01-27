# Contributing 

First off, thanks for taking the time to contribute


##  How to Submit Changes

1.  **Fork** the repo on GitHub.
2.  **Clone** the project to your own machine.
3.  **Create a Branch** for your fix:
    ```bash
    git checkout -b fix/amazing-fix
    ```
4.  **Make your changes.**
5.  **Format your code** (Important!):
    ```bash
    # Run this from the root folder
    find . -name "*.c" -not -path "./.*" | xargs clang-format -i
    ```
6.  **Commit and Push**:
    ```bash
    git add .
    git commit -m "fix: description of what you fixed"
    git push origin fix/amazing-fix
    ```
7.  **Open a Pull Request** on GitHub.

## Running Locally

Make sure it actually compiles before you send it:
```bash
make clean
make
