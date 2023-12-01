#include<iostream>
#include<limits>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};
class Solution{
    public:
    int closestVal(TreeNode* root,int target){
        int closest=root->val;
        while(root){
            closest=(std::abs(target-root->val)<abs(target-closest)) ? root->val:closest;
            root=(target<root->val) ? root->left:root->right;
        }
        return closest;
    }
};
int main(){
    TreeNode* root=new TreeNode(4);
    root->left=new TreeNode(2);
    root->right=new TreeNode(5);
    root->left->left=new TreeNode(1);
    root->left->right=new TreeNode(3);

    double target=2.5;
    Solution obj;
    int closest=obj.closestVal(root,target);
    std::cout<<"The closest root value to "<<target<<" is "<<closest<<std::endl;
}
