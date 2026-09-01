# COMMENTS

## 1. Single-line Comments

Example:

```
let userName = "Alice"; // Declares a variable to store the user's name
```
   
## 2. Multi-line Comments

Example:

```
/*
 * This function calculates the factorial of a given number.
 * It takes a single argument, 'n', which must be a non-negative integer.
 */

function factorial(n) {
   // ... implementation ...
}
```
   
## 3. JSDoc Comments

Example:

```
/**
 * Represents a user profile.
 * @class
 * @param {string} name - The user's full name.
 * @param {number} age - The user's age.
 */

class User {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }
}
```
    
## 4. Exclamation Comments

Example:

```
/*!
 * My Awesome JavaScript Library
 * Copyright (c) 2025 Example Corp.
 * Licensed under the MIT license.
 */
```

## 5. Directive Comments

Example:

```
// @ts-ignore // Ignore TypeScript errors for the next line
const data = someUntypedFunction();

/* eslint-disable no-console */
console.log("This console log will not trigger an ESLint warning.");
/* eslint-enable no-console */
```
    
## 6. Visual Formatting

Example:

```
// ------------------------------------
//  GLOBAL CONFIGURATION
// ------------------------------------
const API_KEY = "your_api_key";
```