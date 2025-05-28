struct Node{
    Node* links[26];
    bool flag=0;
    bool check(char ch){
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    } 
    };

class Trie {
    Node* root;

public:
    Trie() {
        root=new  Node();
    }
    
    void insert(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->check(word[i])){
                node->put(word[i],new Node());
            }
                node=node->get(word[i]);
        }       
        node->flag=true;
    }
    
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->check(word[i])) return 0;
           node= node->get(word[i]);
        }
        return node->flag;
    }
    
    bool startsWith(string prefix) {
        Node* node=root;
        for(int i=0;i<prefix.length();i++){
            if(!node->check(prefix[i])) return 0;
            node=node->get(prefix[i]);
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */