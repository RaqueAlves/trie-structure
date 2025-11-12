#include <iostream>
#include <string>
using namespace std;

class TrieNode{
    public:
        TrieNode* children[26];

        bool isLeaf;

        TrieNode() {
            isLeaf = false;
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }

    void insert(TrieNode* root, const std::string& key) {
        TrieNode* curr = root;
        for (char c : key) {
            int index = c - 'a';
            if (curr->children[index] == nullptr) {
                TrieNode* newNode = new TrieNode();
                curr->children[index] = newNode;
            }
            curr = curr->children[index];
        }
        curr->isLeaf = true;
    }
    
    bool search(TrieNode* root, const string& key) {
        TrieNode* curr = root;
        for (char c : key) {
            int index = c - 'a';
            if (curr->children[index] == nullptr) 
                return false;
            curr = curr->children[index];
        }
        return curr->isLeaf;
    }
    
    bool isPrefix(TrieNode *root, string &key)
    {
        TrieNode *current = root;
        for (char c : key) {
            int index = c - 'a';
            if (current->children[index] == nullptr)
                return false;
            current = current->children[index];
        }

        return true;
    }
};