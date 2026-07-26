import java.util.Collections;
import java.util.ArrayList;

class Solution {
    public int maximumProduct(int[] nums) {
        ArrayList<Integer> a=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            a.add(nums[i]);
        }
        Collections.sort(a);

        int op1=a.get(a.size()-1)*a.get(a.size()-2)*a.get(a.size()-3);
        int op2=a.get(0)*a.get(1)*a.get(a.size()-1);
        return Math.max(op1,op2);
    }
}