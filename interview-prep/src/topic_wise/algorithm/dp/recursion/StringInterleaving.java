package topic_wise.algorithm.dp.recursion;

public class StringInterleaving {
    boolean isInterleaving(String A, String B, String C){
        if(A.length() == 0 && B.length() == 0 && C.length() == 0) return true;
        if(
                (C.length() == 0)||
                (A.length() == 0 && B.length() == 0)
        ){
            return false;
        }
        boolean first = false, second = false;
        if(A.length() > 0 && A.charAt(0) == C.charAt(0)){
            first = isInterleaving(A.substring(1), B, C.substring(1));
        }
        if(B.length() > 0 && B.charAt(0) == C.charAt(0)){
            second = isInterleaving(A, B.substring(1), C.substring(1));
        }
        return first || second;
    }

    public static void main(String[] args) {
        StringInterleaving si = new StringInterleaving();
        System.out.println(si.isInterleaving("a", "b", "b"));
    }
}
