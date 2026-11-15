        return jwt.verify(token, AUTH_SECRET_KEY);
    } catch ( error ) {
        return null;
    }
    // TODO:
    // - Verify the token using AUTH_SECRET_KEY
    // - Use try-catch for error handling
    // - Return decoded payload if valid
    // - Return null if verification fails

}


// Do not modify this
// --- Example Usage ---
if (process.env.NODE_ENV !== "test") {
    const hashed = hashPassword("mySecurePass123");
    console.log("Hashed Password:", hashed);

    console.log("Correct Password Check:", verifyPassword("mySecurePass123", hashed));
    console.log("Wrong Password Check:", verifyPassword("wrongPass", hashed));

    const myToken = generateToken("U100", "user@secureauth.com");
    console.log("Generated Token:", myToken);