#include "encrypt.h"

/**
 * Decrypt a given ciphertext and obtain the corresponding plaintext
 *
 * @param ciphertext the ciphertext, as a string
 * @param key the key, as an string
 * @returns the plaintext, as a string
 */
string decrypt(string ciphertext, string key) 
{ 
    string plaintext = "";  
    for (int i = 0; i < ciphertext.length(); i++) { 
        if (int(ciphertext[i]) != 32) {
            int difference = int(ciphertext[i]) - int(key[i]);
            difference = difference >= 0 ? difference : difference + 26;
            plaintext += char(difference + 65);
        }
        else {
        	plaintext += ciphertext[i];
        }
    } 
    return plaintext; 
} 
