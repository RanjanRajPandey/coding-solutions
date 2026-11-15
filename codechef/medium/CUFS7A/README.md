# CUFS7A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### SecureAuth - Password Hashing and JWT Sessions
- SecureAuth is building the login module for its web application.
- Every user account must be protected in two stages: The password is never stored as plain text — it is stored as a bcrypt hash After a successful login, the user receives a JWT that carries their session details
- Your task is to implement the logic to hash and verify passwords, and to generate and decode session tokens.

 **Function Requirements** 

 **1. hashPassword(password)** 
This function must:

- Accept a plain-text password as a parameter
- Generate a salt using the provided salt rounds value
- Hash the password with bcrypt using that salt
- Return the generated hash as a string

 **2. verifyPassword(password, hash)** 
This function must:

- Accept a plain-text password and a bcrypt hash as parameters
- Compare the password against the hash using bcrypt
- Return true if the password matches the hash
- Return false if it does not match

 **3. generateToken(userId, email)** 
This function must:

- Create a JWT payload containing: userId email
- Sign the JWT using the provided secret key
- Set the token to expire in 1 hour
- Return the generated JWT as a string

 **4. decodeToken(token)** 
This function must:

- Verify the given JWT using the same secret key
- If the token is valid: Return the decoded payload
- If the token is invalid or expired: Return null

Use `try-catch` to handle verification errors.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-15T16:18:44.905Z  

```cpp
// Hash a plain-text password
function hashPassword(password) {
    const salt = bcrypt.genSaltSync(SALT_ROUNDS);
    return bcrypt.hashSync(password,salt);
    // TODO:
    // - Generate a salt using SALT_ROUNDS
    // - Hash the password with the generated salt
    // - Return the hash

}


// Verify a plain-text password against a hash
function verifyPassword(password, hash) {
    return bcrypt.compareSync(password,hash);
    // TODO:
    // - Compare the password with the hash
    // - Return true if they match
    // - Return false if they do not match

}


// Generate a session token (JWT)
function generateToken(userId, email) {

    const payload = { userId, email};

// Secret key for signing and verifying tokens
const AUTH_SECRET_KEY = "SUPER_SECRET_SECUREAUTH_KEY";
const SALT_ROUNDS = 10;


// Number of salt rounds used for hashing
import bcrypt from "bcryptjs";
import jwt from "jsonwebtoken";
```

---

[View on CodeChef](https://www.codechef.com/problems/CUFS7A)