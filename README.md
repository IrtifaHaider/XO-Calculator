## 🎮 Crisscross Game & Calculator 🧮


### 📖 About This Project
A C-based project that combines the classic Crisscross Game (Tic-Tac-Toe) with a basic calculator. Users can play against another player or use the calculator to perform arithmetic operations. This project was developed as part of my 1st semester coursework to practice C programming concepts, including game logic, user input handling, and function-based programming.

---

### 📌 Features
✅ **Tic-Tac-Toe Game** – Play with another user  
✅ **Calculator** – Perform addition, subtraction, multiplication, division  
✅ **User-friendly Menu** – Easy navigation between game & calculator  
✅ **Fully documented code using Doxygen**  
✅ **Works on Windows, Linux, and macOS**  

---

### 🚀 How to Download & Run
#### 🔹 Download from GitHub
Open Git Bash or Command Prompt.

Clone the repository using:

```sh
git clone https://github.com/your-username/XO-calculator.git
```

Navigate to the project folder:

```sh
cd XO-calculator
```

#### 🔹 Run the Program
##### 🖥️ Windows
Compile the program using gcc:

```sh
gcc XO-calculator.c -o XO-calculator.exe
```

Run the executable:

```sh
./XO-calculator.exe
```

##### 🐧 Linux/macOS
Compile the program:

```sh
gcc XO-calculator.c -o XO-calculator
```

Run the executable:

```sh
./XO-calculator
```

---

### 📜 Generate and View Documentation
This project uses Doxygen for documentation.

#### 1️⃣ Install Doxygen
##### Windows: 
Download from [Doxygen Official Site](http://www.doxygen.nl/).

##### Linux/macOS:
Install via terminal:

```sh
sudo apt install doxygen    # Ubuntu/Debian
sudo yum install doxygen    # Fedora
brew install doxygen        # macOS
```

#### 2️⃣ Generate Documentation
Run this command in the project directory:

```sh
doxygen Doxyfile
```

This will create a `docs/html/` folder containing the documentation.

#### 3️⃣ View Documentation
Open `docs/html/index.html` in a web browser to view the documentation.

---

### 🛠️ Code Structure
The project is organized as follows:

- `XO-calculator.c`: Main source file containing the game and calculator logic.
- `Doxyfile`: Configuration file for generating documentation.
- `docs/`: Folder containing the generated documentation (after running Doxygen).

---

### 📝 Notes
- The Tic-Tac-Toe game is designed for two players.
- The calculator handles basic arithmetic operations and includes error handling for division by zero.
- The code is fully documented using Doxygen for easy understanding and maintenance.

---

### 🤝 Contributing
Contributions are welcome! If you find any bugs or want to add new features, feel free to open an issue or submit a pull request.

---
