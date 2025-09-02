# Sed is for Losers

This project is part of 42 School – CPP Module 01 (Exercise 04).
It is a simple reimplementation of a search and replace tool, similar to sed, written in modern C++.  
<br>

## 📖 Description

The program takes three arguments:
```nginx
./sed <filename> <s1> <s2>
```

- \<filename> → Input file to process

- \<s1> → String to search for

- \<s2> → String to replace <s1> with

It creates a new file called <filename>.replace.txt where every occurrence of <s1> is replaced with <s2>.  
<br>

## ⚙️ Features

- Reads the input file line by line using std::getline

- Replaces all occurrences of a substring using a custom replacer() function

- Handles multiple matches in the same line

- Preserves original file structure (no extra newline added at the end)

- Provides basic error handling (invalid arguments, empty search string, file not found)  
<br>

## 🖥️ Example

Input file (example.txt):
```ngnx
hello world
world says hello
```
<br>
Run:
```bash
./sed example.txt world 42
```
<br>
Output file (example.txt.replace.txt):
```nginx
hello 42
42 says hello
```
<br>

## 📂 File Structure

```arduino
.
├── sed.hpp
├── sed.cpp        # replacer() implementation
├── main.cpp       # main program logic
└── Makefile
```
<br>
## 🚀 Build & Run
```bash
make
./sed input.txt foo bar
```
<br>
## 🧠 Notes

- My approach uses erase + insert to perform replacements.
- An alternative solution could use substr.
- This project was a great exercise in file I/O, string manipulation, and memory safety in C++.
<br>

## 📜 License

This code is for educational purposes only.
Please do not copy-paste for 42 evaluations — write your own solution!

