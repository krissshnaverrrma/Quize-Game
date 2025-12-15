# 🎮 C++ Console Quiz Game
 
## Screenshot
![Quize-Game-Preview](/assets/quize_game.jpg)


A modular, console-based quiz application built in standard C++. The game loads questions and answers from an external text file, presents them to the user, and calculates a final score.

## 🛠️ Project Structure

The project is organized into modular components for clean separation of concerns:

-   **`src/`**: Contains all C++ source code files.
-   **`data/`**: Holds external files, primarily the question bank.
-   **`QuizGame_CPP/`**: The root directory where the executable is built.


## 🧩 Components

| File | Role | Key Functionality |
| :--- | :--- | :--- |
| **`main.cpp`** | **Game Driver** | Initializes the quiz, controls the main game loop, and displays the final score. |
| **`Question.h/cpp`** | **Data Model** | Defines the `Question` class (text, options, answer) and its display/check methods. |
| **`QuizManager.h/cpp`**| **File I/O** | Contains the `loadQuestions` function, responsible for reading and parsing `questions.txt`. |
| **`data/questions.txt`**| **Data Source** | External text file providing the questions, allowing easy expansion of the quiz content. |

## 🚀 How to Build and Run

### Prerequisites

You need a C++ compiler installed (like `g++` on Linux/macOS or MinGW on Windows).