package leetcode.string;

public class RemovePalindromicSubsequences_1332 {
    public int removePalindromeSub(String s) {
        return s.length() == 0 ? 0 : s.equals(new StringBuilder(s).reverse().toString()) ?  1 :  2;
    }
}
