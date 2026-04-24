class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int ans=0;
        int cnt=0,cntL=0,cntR=0;
        for(int i=0;i<moves.length();i++){
            char ch=moves.charAt(i);
            if(ch=='_'){
                cnt+=1;
            }else if(ch=='L'){
                cntL+=1;
            }else{
                cntR+=1;
            }
        }
        return (cntL>=cntR)?cntL+cnt-cntR:cntR+cnt-cntL;
    }
}