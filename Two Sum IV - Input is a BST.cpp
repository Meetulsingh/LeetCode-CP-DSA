class Solution {
public:
    
    void helper(TreeNode* root, int k,vector<int>&v){
        if(root==NULL){
            return;
        }
        helper(root->left,k,v);
        helper(root->right,k,v);
        v.push_back(root->val);
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        helper(root,k,v);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(i!=j){
                    if(v[i]+v[j]==k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
