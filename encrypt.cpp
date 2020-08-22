#include "encrypt.h"

/**
 * Encrypt a given plaintext and obtain the corresponding ciphertext
 *
 * @param plaintext the plaintext, as a string
 * @param key the key, as an string
 * @returns the ciphertext, as a string
 */
string encrypt(string plaintext, string key) 
{ 
    string ciphertext = "";  
    for (int i = 0; i < plaintext.length(); i++) { 
        if (int(plaintext[i]) != 32) {
            ciphertext += char((int(plaintext[i]) + int(key[i]) - 65 * 2) % 26 + 65); 
        }
        else {
        	ciphertext += plaintext[i];
        }
    } 
    return ciphertext; 
} 
