# Quantum Cryptosystem

This project implements a toy Post-Quantum Cryptosystem, inspired by the Kyber Key Encapsulation Mechanism. The implementation is divided into modular components for better organization and readability.

## Introduction to Kyber

Kyber is a post-quantum cryptographic algorithm designed to resist attacks by quantum computers. It falls under the category of lattice-based cryptographic schemes. The Kyber Key Encapsulation Mechanism (KEM) is particularly known for its efficiency and security against both classical and quantum adversaries.

Kyber employs the Learning With Errors (LWE) problem as the foundation for its security. The core idea involves encoding secret information into mathematical structures that are hard to decode without the correct keys. Kyber provides a secure and efficient way of exchanging keys, making it suitable for various secure communication applications in a post-quantum era.

## Code Functionality

The code in this repository represents a simplified implementation of a Post-Quantum Cryptosystem, taking inspiration from the principles of Kyber. The primary functionalities include:

1. **Key Generation (`toy_gen`):**
   - Generates a public key, private key, and error vectors for the cryptosystem.

2. **Encryption (`toy_enc`):**
   - Encrypts a message using the generated public key.

3. **Decryption (`toy_dec`):**
   - Decrypts a ciphertext to obtain the original message using the private key.



