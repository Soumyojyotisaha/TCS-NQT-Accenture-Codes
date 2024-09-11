#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

// Function to reverse a sentence using a stack
string reverseSentence(const string &sentence) {
    stack<string> wordStack;
    string word;
    stringstream ss(sentence);  // Using stringstream to split sentence into words
    
    // Push each word onto the stack
    while (ss >> word) {
        wordStack.push(word);
    }
    
    // Pop words from the stack and form the reversed sentence
    string reversedSentence = "";
    while (!wordStack.empty()) {
        reversedSentence += wordStack.top();
        wordStack.pop();
        if (!wordStack.empty()) {
            reversedSentence += " ";  // Add space between words
        }
    }

    return reversedSentence;
}

int main() {
    string sentence = "Hello world this is C++";

    string reversed = reverseSentence(sentence);

    cout << "Original Sentence: " << sentence << endl;
    cout << "Reversed Sentence: " << reversed << endl;

    return 0;
}
