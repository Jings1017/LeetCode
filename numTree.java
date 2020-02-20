class Solution {
    public int numTrees(int n) {
        int[] num = new int[n + 1];
        num[0] = num[1] = 1;
        for (int x = 2; x <= n; x++) {
            num[x] = 0;
            for (int i = 0; i < x; i++) {
                num[x] += num[i] * num[x - i - 1];
            }
        }
        return num[n];
    }
}