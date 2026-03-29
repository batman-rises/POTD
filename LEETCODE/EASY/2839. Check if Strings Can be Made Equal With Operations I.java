class Solution {
    public boolean canBeEqual(String s1, String s2) {
        
        char s1_0 = s1.charAt(0), s1_1 = s1.charAt(1), s1_2 = s1.charAt(2), s1_3 = s1.charAt(3);
        char s2_0 = s2.charAt(0), s2_1 = s2.charAt(1), s2_2 = s2.charAt(2), s2_3 = s2.charAt(3);

        return ((s1_0 == s2_0 && s1_2 == s2_2) || (s1_0 == s2_2 && s1_2 == s2_0)) &&
               ((s1_1 == s2_1 && s1_3 == s2_3) || (s1_1 == s2_3 && s1_3 == s2_1));
    }
}