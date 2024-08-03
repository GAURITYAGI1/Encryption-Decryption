# Encryption-Decryption-Tool
## Caesar Cipher Encryption/Decryption Tool

## Overview

This project is a simple tool for encrypting and decrypting text using the Caesar Cipher. The Caesar Cipher is a basic encryption technique where each letter in the plaintext is shifted a certain number of places down or up the alphabet.

## Features

- **Encryption**: Shifts each letter in the text by a user-defined shift value.
- **Decryption**: Reverses the encryption by shifting letters back by the same shift value.
- **Handles both uppercase and lowercase letters.**

## Requirements

- A C compiler (e.g., `gcc`)

## Usage

1. **Compile the Program**:
   Use a C compiler like `gcc` to compile the program.

   ```sh
   gcc -o caesar_cipher caesar_cipher.c
   ```

2. **Run the Program**:
   Execute the compiled binary.

   ```sh
   ./caesar_cipher
   ```

3. **Follow the Prompts**:
   - **Enter the text**: Input the text you want to encrypt or decrypt.
   - **Enter the shift value**: Provide a shift value between 0 and 25.
   - **Choose an option**:
     - Enter `1` to encrypt the text.
     - Enter `2` to decrypt the text.

## Example

```text
Enter the text to encrypt/decrypt: Hello, World!
Enter the shift value (0-25): 3
Choose an option:
1. Encrypt
2. Decrypt
Enter your choice: 1
Encrypted text: Khoor, Zruog!

Enter the text to encrypt/decrypt: Khoor, Zruog!
Enter the shift value (0-25): 3
Choose an option:
1. Encrypt
2. Decrypt
Enter your choice: 2
Decrypted text: Hello, World!
```

## Code Explanation

- **Encryption Function**: Shifts each letter by the specified number of positions.
- **Decryption Function**: Reverses the encryption by shifting each letter back by the specified number of positions.
- **Handling of Characters**: The program ensures that letters wrap around the alphabet and maintains case sensitivity.

## Limitations

- Only works with alphabetic characters; non-alphabetic characters are not altered.
- The shift value must be between 0 and 25.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

## Contributing

Contributions are welcome! If you have suggestions or improvements, please submit a pull request or open an issue.

## Contact

For any questions or feedback, you can reach out to [gaurityaggi7524@gmail.com](mailto:gaurityagi7524@gmail.com).

---
Made with 🤍💖!!
