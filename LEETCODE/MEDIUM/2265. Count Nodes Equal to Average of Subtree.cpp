/**
Use postorder DFS so each node first gets the sum and count of its left & right subtrees.
For every node, calculate: sum = leftSum + rightSum + node->val and count = leftCount + rightCount + 1.
If node->val == sum / count, increment the answer, then return {sum, count} to the parent.
 */
class Solution {
public:
    int result;
    pair<int,int> solve(TreeNode* root){
        if(root==NULL)return {0,0};

        auto L=solve(root->left);
        auto R=solve(root->right);

        int leftSum=L.first;
        int leftCount=L.second;

        int rightSum=R.first;
        int rightCount=R.second;

        int sum=root->val+leftSum+rightSum;
        int cnt=1+leftCount+rightCount;
        
        if(root->val == (sum/cnt)){
            result++;
        }

        return {sum,cnt};
    }
    int averageOfSubtree(TreeNode* root) {
        result=0;
        solve(root);
        return result;
    }
};
