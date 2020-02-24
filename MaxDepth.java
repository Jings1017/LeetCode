class Solution {

    public int maxDepth(TreeNode root) {
        if(root==null)
            return 0;
        int count = 1;
        if(root.left == null && root.right == null)
            return count;
        else
            return count + Math.max(maxDepth(root.left),maxDepth(root.right));
        
    }
}