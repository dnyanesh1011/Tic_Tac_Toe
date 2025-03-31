# 🎮 Tic Tac Toe - Enhanced Console Version ❌⭕

Welcome to the Tic Tac Toe game—a classic two-player experience with a modern, visually appealing twist! This console-based version brings the timeless game to life with decorative headers, a dynamic game board, and color-coded player markers.

---

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Requirements](#requirements)
- [Installation and Compilation](#installation-and-compilation)
- [Gameplay](#gameplay)
- [Code Overview](#code-overview)
- [Customization](#customization)
- [License](#license)

---

## Overview

This project is a console-based implementation of Tic Tac Toe, written in C++. It elevates the standard gameplay with:

- **ANSI Color Codes:** Player X appears in bold red, and Player O shines in vibrant blue.
- **Enhanced Board Visuals:** Unicode box-drawing characters and a stylish header create an eye-catching game board.
- **Dynamic Screen Clearing:** The console refreshes between moves for a seamless experience (compatible with Unix and Windows).

---

## Features

- **Color-Coded Players:** Easily distinguish between players with red and blue markers.
- **Dynamic and Clean UI:** The game screen refreshes after each move for a polished terminal look.
- **Decorative Header:** A sleek header crowns the board every time it’s redrawn.
- **Input Validation:** Ensures moves are valid, preventing errors or repeats.
- **Win and Draw Detection:** Checks rows, columns, and diagonals for wins, and detects draws when the board fills up.

---

## Requirements

- **C++ Compiler:** Requires a compiler like g++ or clang++.
- **Terminal Support:** Must support ANSI escape codes for colors (most Unix systems and Windows 10+ terminals work).
- **Standard C++ Library:** Uses only standard libraries—no extra dependencies needed.

---

## Installation and Compilation

### Clone or Download:
Grab the source code from the [repository](https://github.com/dnyanesh1011/Tic_Tac_Toe).

### Open a Terminal:
Navigate to the folder containing `tic_tac_toe.cpp`.

### Compile the Program:

#### For Unix/Linux/macOS:
```bash
g++ -o tic_tac_toe tic_tac_toe.cpp
```

#### For Windows:
```bash
g++ -o tic_tac_toe.exe tic_tac_toe.cpp
```

### Run the Program:

#### On Unix/Linux/macOS:
```bash
./tic_tac_toe
```

#### On Windows:
```bash
tic_tac_toe.exe
```

---

## Gameplay

- **Two-Player Mode:** Designed for two players to battle it out.
- **Making Moves:** Enter row and column numbers when prompted to place your mark.
- **Winning the Game:** Wins are checked after each move across rows, columns, and diagonals.
- **Draw Condition:** Ends in a draw if the board fills up with no winner.
- **Clear Instructions:** Invalid moves trigger a friendly nudge to try again.

---

## Code Overview

- **Main Function:** Sets up the game board, runs the game loop, and evaluates win/draw states.
- **Board Initialization:** Uses a 3x3 vector, starting with blank spaces.
- **Enhanced Printing:** Displays a decorative header and colors the board with ANSI codes, refreshing the console each turn.
- **Input Validation:** Locks out invalid or occupied moves for a smooth experience.

---

## Customization

Make it your own:
- **Change Colors:** Tweak the ANSI codes for a personal color scheme.
- **Modify Board Size:** Expand the grid by adjusting the dimensions and logic.
- **Improve Graphics:** Play with Unicode characters or add more flair to the design.

---

## License

This project is open-source under the MIT License. Feel free to use, tweak, and share it as you like!

---

Enjoy the game and happy coding!
