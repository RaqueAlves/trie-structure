#include <iostream>
#include <string>

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
            if (curr->children[c - 'a'] == nullptr) {
                TrieNode* newNode = new TrieNode();
                curr->children[c - 'a'] = newNode;
            }
            curr = curr->children[c - 'a'];
        }
        curr->isLeaf = true;
    }
};