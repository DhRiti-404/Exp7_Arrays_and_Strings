# Exp7_Arrays_and_Strings
## 📖 Introduction

In C++, **arrays** and **strings** are fundamental data structures used to store and manipulate collections of data.

### 🔢 Arrays
An **array** is a fixed-size sequence of elements of the same data type stored in contiguous memory locations. Arrays allow efficient access and manipulation using indices. They are ideal for storing lists of numbers, characters, or other primitive types.

**Key Features:**
- Static size (defined at declaration)
- Indexed access (starting from 0)
- Useful for tasks like searching, sorting, and aggregation

### 🧵 Strings
A **string** is a sequence of characters used to represent text. C++ supports two types of strings:
- **C-style strings**: Character arrays ending with a null character (`'\0'`)
- **C++ `string` class**: Part of the Standard Library, offering dynamic sizing and rich functionality

Strings are essential for handling user input, displaying messages, and performing operations like concatenation, reversal, and pattern matching.

This experiment explores both arrays and strings through hands-on programs that build a strong foundation for understanding data handling in C++.

---

## 📘 Programs explained:

### 1. **Print Elements of an Array**
- **Theory**: Arrays are fixed-size collections of elements of the same data type. They are stored in contiguous memory locations and can be accessed using indices.
- **Program Goal**: Declare an array, initialize it, and print each element using a loop.
- **Key Concepts**: Array declaration, indexing, `for` loop traversal.

---

### 2. **Input Elements & Access by Index**
- **Theory**: Arrays allow direct access to any element using its index. Indexing starts from 0.
- **Program Goal**: Take user input to fill an array and retrieve a specific element by its index.
- **Key Concepts**: `cin`, bounds checking, user interaction.

---

### 3. **Sum and Average of Array Elements**
- **Theory**: Summing elements involves iterating through the array and adding each value. Average is calculated by dividing the total sum by the number of elements.
- **Program Goal**: Accept array input, compute the sum, and calculate the average.
- **Key Concepts**: Looping, arithmetic operations, type casting for accurate average.

---

### 4. **Find Minimum and Maximum in Array**
- **Theory**: Finding the smallest or largest value requires comparing each element with a current minimum or maximum.
- **Program Goal**: Traverse the array to identify the minimum and maximum values.
- **Key Concepts**: Conditional logic, comparison operators, initialization with first element.

---

### 5. **String Declaration and Initialization**
- **Theory**: Strings in C++ can be handled using C-style character arrays or the `string` class from the Standard Library. The `string` class offers more flexibility and built-in functions.
- **Program Goal**: Demonstrate various ways to declare and initialize strings.
- **Key Concepts**: `char[]`, `string`, constructors, assignment, user input.

---

### 6. **String Concatenation**
- **Theory**: Concatenation means joining two or more strings into one. In C++, this can be done using the `+` operator or the `append()` method.
- **Program Goal**: Combine multiple strings and display the result.
- **Key Concepts**: `+`, `+=`, `append()`, memory handling.

---

### 7. **Print String in Reverse**
- **Theory**: Reversing a string involves accessing characters from the end to the beginning. This is useful in many algorithms like palindrome checking.
- **Program Goal**: Take a string input and print its reverse.
- **Key Concepts**: Looping in reverse, string indexing.

---

### 8. **Palindrome Check**
- **Theory**: A palindrome is a word or phrase that reads the same backward as forward. To check for a palindrome, compare characters from both ends moving toward the center.
- **Program Goal**: Clean the input (remove spaces, ignore case), then check if it’s a palindrome.
- **Key Concepts**: String manipulation, `tolower()`, `isalnum()`, two-pointer technique.

---

## 📚 Conclusion:
Through these experiments, we explored fundamental concepts of arrays and strings in C++. Arrays taught us how to store and manipulate collections of data efficiently, while string operations introduced us to textual data handling using both C-style and modern C++ approaches. By implementing tasks like searching, summing, reversing, and checking for palindromes, we gained practical experience in using loops, conditionals, and built-in functions.
