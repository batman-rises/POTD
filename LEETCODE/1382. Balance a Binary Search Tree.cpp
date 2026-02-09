
class Solution {
public:
TreeNode* solve(int l,int r,vector<int>& nums){
        if(l>r)return NULL;
        int mid=l+(r-l)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        node->left=solve(l,mid-1,nums);
        node->right=solve(mid+1,r,nums);
        return node;
    }
    void inorder(TreeNode* root,vector<int> &res){
        if(root==NULL)return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> res;
        inorder(root,res);
        int l=0;
        int r=res.size()-1;
        //vector<int> res;
        return solve(l,r,res);
    }
};