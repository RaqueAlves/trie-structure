//!  Copyright [2025] <Raquel Alves Pinto>

#ifndef STRUCTURES_TRIE_H
#define STRUCTURES_TRIE_H

#include <string>

namespace structures {

    class TrieNode {
     public:
        TrieNode* children[26];
        bool isLeaf;

        TrieNode(); 
        
        void insert(TrieNode* root, const std::string& key);
        
        bool search(TrieNode* root, const std::string& key);
        
        bool isPrefix(TrieNode* root, const std::string& key);
    };

}

#endif