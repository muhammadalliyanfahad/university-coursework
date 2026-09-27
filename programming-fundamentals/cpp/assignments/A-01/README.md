# 🕷️ Spider-Man Console Art Generator

A C++ console-based art system that renders a manually constructed Spider-Man artwork in multiple visual styles.

The project started as a Programming Fundamentals assignment to create a complex shape using C++. Instead of creating a single static shape, it was developed into an interactive console art system where the **same Spider-Man artwork can be rendered using different characters and color schemes**.

---

## 📌 Project Overview

The **Spider-Man Console Art Generator** separates the Spider-Man artwork itself from the way it is visually rendered.

The user selects a rendering style, and the program applies that style to the same manually constructed Spider-Man artwork.

For example, the artwork can be displayed using:

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

This allows the same Spider-Man artwork to have multiple visual representations without recreating the artwork for every style.

---

## ✨ Features

* 🕷️ Manually constructed Spider-Man console/pixel artwork
* 🎨 Multiple rendering styles
* 🌈 ANSI-based foreground and background colors
* 🔄 Interactive rendering-style selection
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
Render Spider-Man artwork
  ↓
Ask whether to render again
  ↓
Repeat or exit
```

The Spider-Man artwork is manually constructed as a grid. Instead of storing a completely different version of the artwork for every style, the program assigns different rendering values to the artwork's components.

Conceptually:

```text
             Spider-Man Artwork
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

This means the **structure of the Spider-Man artwork and its visual representation are treated separately**.

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

Each style changes the characters and/or terminal formatting used to render the Spider-Man artwork.

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

The standalone project currently consists primarily of the C++ source file:

```text
A-01/
│
├── A-01.cpp
├── A-01.exe
└── README.md
```

Additional screenshots or demonstrations can be added later if the project is expanded.

---

## 🚀 Running the Project

### 1. Clone the repository

```bash
git clone https://github.com/muhammadalliyanfahad/university-coursework.git
```

### 2. Navigate into the project

```bash
cd programming-fundamentals/cpp/assignments/A-01
```

### 3. Compile

Using MinGW/GCC:

```bash
g++ A-01.cpp -o A-01
```

### 4. Run

```bash
A-01
```

> **Note:** The current implementation was developed and tested primarily with Windows CMD and uses Windows-specific behavior alongside ANSI escape sequences.

---

## 📚 What This Project Demonstrates

This project demonstrates the progression from basic console output toward a small interactive C++ program.

It combines:

**Basic output → variables → conditions → loops → functions → input validation → terminal formatting → debugging → Git**

The project also demonstrates an important programming principle:

> **The same underlying data or structure can often be represented in multiple ways by separating the underlying structure from its presentation.**

In this project, the manually constructed Spider-Man artwork remains the underlying structure while the selected rendering style determines how that structure is displayed in the console.

---

## 🔧 Future Improvements

Possible future improvements include:

* Add additional Spider-Man artwork
* Allow the user to choose between different artworks
* Add additional rendering styles
* Separate artwork data from rendering logic more cleanly
* Add a configuration system for colors and characters
* Improve cross-platform terminal support
* Add screenshots/GIF demonstrations
* Expand the system into a general-purpose console-art generator

The final direction could evolve from a **Spider-Man-specific console art generator** into a more general system capable of rendering multiple manually constructed artworks.

---

## 👨‍💻 Author

**Muhammad Alliyan Fahad**

First-semester BSCS student
University of Engineering and Technology, Lahore

---

## 📄 Origin

This project originated from a **Programming Fundamentals assignment** requiring the creation of a complex shape using C++.

Rather than producing only a static shape, the assignment was expanded into an interactive Spider-Man console-art system to explore additional C++ concepts, terminal rendering, input handling, debugging, and development workflow.
