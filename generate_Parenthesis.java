class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> res = new ArrayList<String>();
        helper(n, n, "", res);
        return res;
  }
    
    private void helper(int left, int right, String parenthesis, List<String> result) {
        if(left == 0 && right == 0) {
            result.add(parenthesis);
            return;
        }
        
        if(left > 0) {
            helper(left-1, right, parenthesis + "(", result);
        }
        
        if(right > left) {
            helper(left, right-1, parenthesis + ")", result);
        }
    }
}