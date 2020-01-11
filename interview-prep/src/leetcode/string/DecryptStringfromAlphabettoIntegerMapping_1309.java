package leetcode.string;

public class DecryptStringfromAlphabettoIntegerMapping_1309 {
    public String freqAlphabets(String cx) {
        char s[] = cx.toCharArray();
        StringBuilder sb = new StringBuilder();
        int count = 0, i;
        for (i = 0; i < s.length - 3; ){
            char a = s[i];
            char b = s[i+1];
            char c = s[i+2];

            int aa = Integer.parseInt(a+"");
            int bb = Integer.parseInt(b+"");

            if(c == '#'){
                int cur = aa * 10 + bb;  //convert a & b to int
                sb.append((char)('a'+cur-1));
                count+=3;
                i += 3;
            }
            else{
                //aa corresponding mapping of a
                sb.append((char)('a'+aa-1));
                i+=1;
                count+=1;
            }
        }
        //  s.length - count -> how many left
        int left = s.length - count;
        i = count;
        //if three left
        if(left == 3){
            char a = s[i];
            char b = s[i+1];
            char c = s[i+2];

            int aa = Integer.parseInt(a+"");
            int bb = Integer.parseInt(b+"");

            if(c == '#'){
                int cur = aa * 10 + bb;  //convert a & b to int
                sb.append((char)('a'+cur-1));
                count+=3;
            }
            else{
                int cc = Integer.parseInt(c+"");
                sb.append((char)('a'+aa-1));
                sb.append((char)('a'+bb-1));
                sb.append((char)('a'+cc-1));
            }

        }
        else if(left == 2){
            char a = s[i];
            char b = s[i+1];
            int aa = Integer.parseInt(a+"");
            int bb = Integer.parseInt(b+"");
            sb.append((char)('a'+aa-1));
            sb.append((char)('a'+bb-1));

        }
        else if(left == 1){
            char a = s[i];
            int aa = Integer.parseInt(a+"");
            sb.append((char)('a'+aa-1));
        }
        return sb.toString();
// if two left

//if one left
    }
}
