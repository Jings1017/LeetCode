class Solution {
    public boolean check(TreeNode left, TreeNode right)
    {
        if(left == null && right == null) return true;
        else if(left == null || right == null) return false;
        
        if(left.val != right.val) return false;
        return check(left.left,right.right) && check(left.right,right.left);
        
    }
    public boolean isSymmetric(TreeNode root) {
        if(root == null) return true;
        return check(root.left,root.right);
    }
}