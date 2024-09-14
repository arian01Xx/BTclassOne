class SolutionNine{
public:
	int ans=INT_MAX;
	int prev=-1;
	void search(TreeNode* root){
		if(!root) return;
		search(root->left);
		if(prev!=-1){
			int diff=abs(root->val-prev);
			ans=min(ans,diff);
		}
		prev=root->val;
		search(root->right);
	}
	int getMinimumDifference(TreeNode* root){
		search(root);
		return ans;
	}
};