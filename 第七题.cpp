class Solution {
    int count = 0;
    int FAC[] = new int[]{1,1, 2, 6, 24, 120, 720, 5040, 40320,362880};	// 阶乘
    public String getPermutation(int n, int k) {
        List<Integer> list = new ArrayList<>();
        StringBuilder sb = new StringBuilder();
        int index=0;
        k--;
        for(int i=0;i<n;i++)list.add(i+1);
        for(int i=n;i>=1;i--){
            int r = k/FAC[i-1];
            int y = k%FAC[i-1];
            k=y;
            
            sb.append(list.get(r));
            list.remove(r);
        }
        return sb.toString();
    }
}
