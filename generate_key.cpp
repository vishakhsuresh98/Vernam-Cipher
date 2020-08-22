#include "generate_key.h"

/**
 * Get a random character
 *
 * @param rand a random number in the range 0 to 25
 * @returns a character in the range A to Z
 */
char get_char(int rand)
{
	return char(65 + rand);
}

string generate_key(string plaintext)
{
	string key = "";
	for(int i = 0; i < plaintext.length(); i++)	{
		key += get_char(rand() % 26);
	}
	return key;
}