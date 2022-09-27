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
    


void insertWord(string word){
    node *currentNode = trie;  
    for (int i = 0; i < word.length(); i++){
        if(currentNode->mapero.find(word[i]) == currentNode->mapero.end()){
            currentNode->mapero[word[i]] = new node();
        }
        currentNode = currentNode->mapero[word[i]];
    }
    currentNode->isWord=true;
}
