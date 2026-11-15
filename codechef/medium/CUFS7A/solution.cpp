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