class Solution {
    private boolean helper(String s, String[] dictionary){
        for(String t:dictionary){
            int cnt=0;
            for(int i=0;i<s.length();i++){
                if(s.charAt(i) != t.charAt(i))
                    cnt++;
                if(cnt>2)break;
            }
            if(cnt<=2)return true;
        }
        return false;
    }
    public List<String> twoEditWords(String[] queries, String[] dictionary) {
        List<String> res = new ArrayList<>();
        for(String s:queries){
            if(helper(s,dictionary)==true){
                res.add(s);
            }
        }
        return res;
    }
}

