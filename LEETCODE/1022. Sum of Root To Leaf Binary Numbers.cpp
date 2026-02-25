class Solution {
public:
    int helper(string n){
        //reverse(n.begin(),n.end());
        int ans=0;
        for(int i = 0; i < n.size(); i++){
            ans = ans * 2 + (n[i] - '0');
        }
        return ans;
    }
    int getBinary(TreeNode* root,string &res){
        if (root == NULL) return 0;

        if (root->left == NULL && root->right == NULL){
            res+=to_string(root->val);
            int val= helper(res);
            res.pop_back();
            return val;
        }
        //res=(res*10)+root->val;
        res+=to_string(root->val);
        
            int left=getBinary(root->left,res);
            int right=getBinary(root->right,res);

            res.pop_back();
        
        return left+right;
    }
    int sumRootToLeaf(TreeNode* root) {
        
        int s=0;
        string res="";
        s+=getBinary(root,res);
        return s;
    }
};