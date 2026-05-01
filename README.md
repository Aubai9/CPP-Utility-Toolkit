# 🛠️ C++ Multi-Purpose Utility Toolkit & Client Manager

> A comprehensive C++ utility library for string manipulation, mathematical operations, and arrays, featuring a built-in file-based Client Management System.

## 🌟 Overview
This project serves as a robust foundation for C++ applications. It includes a central utility class (`clsUtil`) packed with static methods to handle everyday programming tasks, eliminating the need to rewrite common logic. Additionally, it features a complete CRUD-like system for managing bank clients, storing data securely in text files.

## ✨ Key Features

### 🧮 Math & Array Operations
- Min, Max, and Sum calculations.
- Factorial and Power mathematical functions.
- Array generation, sorting, and shuffling.
- Odd/Even validation.

### 📝 String Manipulation
- **Trim:** Left, Right, and All spaces.
- **Split:** Robust string splitting based on custom delimiters.
- **Transform:** Convert to uppercase/lowercase for individual letters or entire words.
- **Replace:** Find and replace specific words within strings.

### 🔐 Security & Randomization
- Basic text Encryption and Decryption algorithms.
- Secure Random Number and Character generation (Digits, Letters, Special Chars).
- Automated unique Key/Serial Number generation.

### 🗄️ Client Data Management
- Serialization and Deserialization of client records (`stClient`).
- Read and Write client data directly to `Clients.txt`.
- Display all clients in a formatted, clean table view.

## 🚀 Quick Start
To compile and run the project using `g++`, open your terminal and type:
```bash
g++ main.cpp clsUtil.cpp -o myProgram
./myProgram
```
📂 Project Structure
main.cpp: Contains various test cases demonstrating the utility functions.
clsUtil.h: Header file defining the structure, enums, and static methods.
clsUtil.cpp: Implementation of all logic and algorithms.
Clients.txt: Automatically generated file to store client records safely.
