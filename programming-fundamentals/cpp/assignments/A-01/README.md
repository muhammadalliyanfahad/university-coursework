# 🎨 Console Art Generator

A C++ console-based art system that renders manually constructed ASCII/pixel artwork in multiple visual styles.

The project started as a Programming Fundamentals assignment to create a complex shape using C++. Instead of creating a single static shape, it was developed into an interactive console art system where the same underlying artwork can be rendered using different characters and color schemes.

---

## 📌 Project Overview

The **Console Art Generator** separates the artwork itself from the way it is visually rendered.

The user selects a rendering style, and the program applies that style to the same manually constructed artwork.

For example, the same artwork can be displayed using:

* Solid background pixels
* `##`
* `@@`
* `$$`
* `**`
* `::`
* `!!`
* `++`
* `&&`
* `%%`

This allows multiple visual representations to be generated without recreating the artwork for every style.

---

## ✨ Features

* 🖼️ Manually constructed console/pixel artwork
* 🎨 Multiple rendering styles
* 🌈 ANSI-based foreground and background colors
* 🔄 Interactive style selection
* 🔁 Option to render the artwork repeatedly
* 🛡️ Basic input validation
* 🧹 Input-buffer handling and recovery
* 🪟 Windows-specific ANSI support handling
* 🧩 Reusable artwork structure across different rendering styles

---

## 🛠️ Technologies Used

* **C++**
* **MinGW / GCC**
* **Windows CMD**
* **ANSI Escape Sequences**
* **Git**
* **GitHub**

### C++ Concepts Used

* `cout`
* `cin`
* Variables and basic data types
* `if / else if / else`
* `do-while` loops
* Functions
* Strings
* Input validation
* Input stream state and buffering
* Preprocessor directives
* Conditional compilation

---

## ⚙️ How It Works

The program follows a simple pipeline:

```text
Start
  ↓
Enable required terminal behavior
  ↓
Display rendering-style menu
  ↓
Get user selection
  ↓
Validate input
  ↓
Configure rendering characters/colors
  ↓
Render the same artwork
  ↓
Ask whether to render again
  ↓
Repeat or exit
```

The artwork itself is manually constructed as a grid. Instead of storing a completely different artwork for every style, the program assigns different rendering values to the artwork's components.

Conceptually:

```text
              Artwork Structure
                     │
          ┌──────────┼──────────┐
          ↓          ↓          ↓
       Red area   Blue area   White area
          │          │          │
          └──────────┼──────────┘
                     ↓
              Selected Style
                     ↓
             Console Rendering
```

This means the **structure of the artwork and its visual representation are treated separately**.

---

## 🎨 Rendering Styles

The current implementation provides ten rendering styles:

| #  | Style                   |
| -- | ----------------------- |
| 1  | Solid Background Blocks |
| 2  | Hashtag `##`            |
| 3  | At-Symbol `@@`          |
| 4  | Dollar-Sign `$$`        |
| 5  | Asterisk `**`           |
| 6  | Colon `::`              |
| 7  | Exclamation `!!`        |
| 8  | Plus `++`               |
| 9  | Ampersand `&&`          |
| 10 | Percentage `%%`         |

Each style changes the characters and/or terminal formatting used to render the artwork.

---

## 🧩 Input Validation

The program validates the user's menu selection before continuing.

It handles:

* Numbers outside the valid range
* Non-numeric input
* Invalid stream states
* Leftover characters in the input buffer

The program uses:

```cpp
cin.fail()
cin.clear()
cin.ignore()
```

to detect and recover from invalid input.

During development, an input-buffer bug was encountered when multiple characters were entered where the program expected a single `char`. Tracing the input stream and loop execution revealed that leftover characters were being consumed by the next input operation.

The issue was fixed by clearing the appropriate input-buffer contents before continuing the loop.

---

## 🪟 Windows & ANSI Support

The project uses ANSI escape sequences for terminal formatting.

Because the project was developed and tested in Windows CMD, the program contains a Windows-specific function for enabling the required ANSI behavior:

```cpp
#ifdef _WIN32
    system("");
#endif
```

The OS-specific operation is isolated inside a function so that the rest of the program does not depend directly on Windows-specific compilation.

---

## 📁 Project Structure

The project currently consists primarily of the C++ source file:

```text
Console-Art-Generator/
│
├── ConsoleArtGenerator.cpp
└── README.md
```

Additional screenshots or demonstrations can be added later if the project is expanded.

---

## 🚀 Running the Project

### 1. Clone the repository

```bash
git clone <repository-url>
```

### 2. Navigate into the project

```bash
cd Console-Art-Generator
```

### 3. Compile

Using MinGW/GCC:

```bash
g++ ConsoleArtGenerator.cpp -o ConsoleArtGenerator
```

### 4. Run

```bash
ConsoleArtGenerator
```

> **Note:** The current implementation was developed and tested primarily with Windows CMD and uses Windows-specific behavior alongside ANSI escape sequences.

---

## 📚 What This Project Demonstrates

This project demonstrates the progression from basic console output toward a small interactive C++ program.

It combines:

**Basic output → variables → conditions → loops → functions → input validation → terminal formatting → debugging → Git**

The project also demonstrates an important programming principle:

> **The same underlying data or structure can often be represented in multiple ways by separating the underlying structure from its presentation.**

---

## 🔧 Future Improvements

Possible future improvements include:

* Add more artwork
* Allow the user to choose between different artworks
* Add additional rendering styles
* Separate artwork data from rendering logic more cleanly
* Add a configuration system for colors and characters
* Improve cross-platform terminal support
* Add screenshots/GIF demonstrations
* Expand the project into a general-purpose console-art generator

---

## 👨‍💻 Author

**Muhammad Alliyan Fahad**

First-semester BSCS student
University of Engineering and Technology, Lahore

---

## 📄 Origin

This project originated from a **Programming Fundamentals assignment** requiring the creation of a complex shape using C++.

Rather than producing only a static shape, the assignment was expanded into an interactive console-art system to explore additional C++ concepts, terminal rendering, input handling, debugging, and development workflow.
