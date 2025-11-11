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
};