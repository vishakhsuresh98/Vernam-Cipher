#include<time.h>

#include "encrypt.h"
#include "decrypt.h"
#include "generate_key.h"

// Driver program to test the above functions 
int main() 
{  
    srand(time(NULL));
    ifstream in_ptr;
    ofstream out_ptr;

    cout << "Vernam cipher" << endl;
    cout << "-------------\n" << endl;

    // encryption process
    string plaintext;
    in_ptr.open("plaintext.txt"); 
    getline(in_ptr, plaintext);
    string key = generate_key(plaintext); 
    cout << "Encryption process :" << endl;
    cout << "Plaintext  - " << plaintext << endl;
    cout << "Key        - " << key << endl;
    string ciphertext = encrypt(plaintext, key); 
    cout << "Ciphertext - " << ciphertext << endl; 
    cout << "\n";
    in_ptr.close();

    // writing ciphertext to file
    out_ptr.open("ciphertext.txt");
    out_ptr << ciphertext << endl;
    out_ptr.close();

    // writing key to file
    out_ptr.open("key.txt");
    out_ptr << key << endl;
    out_ptr.close();

    // decryption process
    ciphertext = "";
    cout << "Decryption process :" << endl;
    in_ptr.open("ciphertext.txt"); 
    getline(in_ptr, ciphertext);
    cout << "Ciphertext - " << ciphertext << endl;
    cout << "Key        - " << key << endl; 
    cout << "Plaintext  - " << decrypt(ciphertext, key) << endl; 
    in_ptr.close();
    return 0; 
} 
