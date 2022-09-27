#include <bits/stdc++.h>

using namespace std;
struct node {
    char currentCharacter;       
    bool isWord;
   //  int priority = 0;            
    struct node *children[27];  // [null,null,null,......,null]
    node() {
        isWord = false;
    }
}*trie; 

// Inicializar 

void init() {
    trie = new node();  // Instanciar el objeto trie
}
    


void insertWord(string word) {  
    node *currentNode =  trie;  
    for (int i = 0; i< word.length(); i++) {
        int character = word[i] - 'a';   
        if(currentNode->children[character] == NULL ) {
            currentNode->children[character] = new node();
        }
        currentNode = currentNode->children[character];
        currentNode->currentCharacter = word[i];
    }
    currentNode->isWord = true;
}

bool searchWord(string word) {
    node *currentNode =  trie;  
    for (int i = 0; i< word.length(); i++) {
        int character = word[i] - 'a';
        if(currentNode->children[character] == NULL ) {
           return false;
        }
        currentNode = currentNode->children[character];
    }
    return currentNode->isWord;
}
