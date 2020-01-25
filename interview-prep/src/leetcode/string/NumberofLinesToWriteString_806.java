package leetcode.string;

public class NumberofLinesToWriteString_806 {
    public int[] numberOfLines(int[] widths, String S) {
        int r = 1;
        int c = 0;
        for(char s : S.toCharArray()){
            int w = widths[s - 'a'];
            r = c + w > 100 ? r + 1 : r;
            c = c + w > 100 ? w : c + w;
        }
        return new int[]{r,c};
    }
}
