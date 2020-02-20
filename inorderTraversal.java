/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    List result = new ArrayList<>();
 
    public List<Integer> inorderTraversal(TreeNode root) {
        travers(root);
        return result;
    }
    void travers(TreeNode root){
        if(root==null)
            return;
            
        if(root.left == null && root.right==null){
            result.add(root.val);
            return;
        }
        else{
            travers(root.left);
            result.add(root.val);
            travers(root.right);                        
        }
    }
}