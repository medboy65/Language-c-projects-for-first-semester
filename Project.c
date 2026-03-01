#include <stdio.h>                         //@Mohammed Lamkhayar 24070260026//

int main() {
    char sentence[100]; // Max length of sentence is 100 characters
    char words[50][100]; // Assuming max 50 words, each with max 100 characters
    int uniqueCount = 0; // Counter for unique words
    int wordStart = 0, wordEnd = 0, sentenceLength = 0; // Variables to track word boundaries and sentence length

    // Input the sentence
    printf("Enter a sentence: ");
    gets(sentence); // Use gets() to read the entire sentence, including spaces                              //@Mohammed Lamkhayar 24070260026//
    // Convert the sentence to lowercase
for (int i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
        sentence[i] = sentence[i] + ('a' - 'A');
    }
}

    // Calculate the length of the sentence
    while (sentence[sentenceLength] != '\0') { // Loop until the null terminator is reached
        sentenceLength++;
    }
                //@Mohammed Lamkhayar 24070260026//

    // Loop through each character in the sentence to identify words
    for (int i = 0; i <= sentenceLength; i++) {
        // Check for end of a word (indicated by a space or the end of the sentence)
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (wordStart < wordEnd) { // Ensure there is a valid word to process
                // Extract the word from the sentence
                char word[100]; // Temporary array to hold the current word
                int k = 0; // Index for the word array
                for (int j = wordStart; j < wordEnd; j++) {
                    word[k++] = sentence[j]; // Copy characters from the sentence to the word array
                }
                word[k] = '\0'; // Null-terminate the word
                                                                                                                   //@Mohammed Lamkhayar 24070260026//
                // Check if the extracted word is unique
                int isUnique = 1; // Flag to determine if the word is unique
                for (int j = 0; j < uniqueCount; j++) { // Loop through all stored unique words
                    int isSame = 1; // Flag to check if the current word matches a stored word
                    for (int l = 0; words[j][l] != '\0' || word[l] != '\0'; l++) { // Compare character by character
                        if (words[j][l] != word[l]) { // If any character differs, the words are not the same
                            isSame = 0;
                            break;
                        }
                    }
                    if (isSame) { // If the word matches an existing word, it is not unique
                        isUnique = 0;
                        break;
                    }
                }
                                                                                                                                //@Mohammed Lamkhayar 24070260026//
                // If the word is unique, add it to the list of unique words
                if (isUnique) {
                    int k = 0;
                    while (word[k] != '\0') { // Copy the word into the unique words array
                        words[uniqueCount][k] = word[k];
                        k++;
                    }//@Mohammed Lamkhayar 24070260026//
                    words[uniqueCount][k] = '\0'; // Null-terminate the word in the unique words array
                    uniqueCount++; // Increment the count of unique words
                }
            }
            // Update word boundaries for the next word
            wordStart = i + 1; // Set the start of the next word                                                                        //@Mohammed Lamkhayar 24070260026//
            wordEnd = wordStart; // Reset the end of the word to the start
        } else {
            wordEnd++; // Expand the word boundary as we encounter non-space characters
        }
    }

    // Output the total number of unique words
    printf("%d\n", uniqueCount);

    return 0;
}

//@Mohammed Lamkhayar 24070260026//
