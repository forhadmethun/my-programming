class Solution5 {
    public static  int solution(String S) {
        if(S.contains("aaa")) return -1;
        int sum = 2;
        int length = S.length();
        for(int i = 0; i < length; i++){
            if(S.charAt(i) == 'a'){
                sum -= 1;
            }else{
                sum += 2;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        System.out.println(solution("aabab"));
        System.out.println(solution("dog"));
        System.out.println(solution("aa"));
        System.out.println(solution("baaaa"));
    }
}
