class Solutio3n {
    public static  int solution(String S) {
        String modifiedS = "";
        int current = 0;
        int next = 1;
        if(S.length() == 1){
            if (S.charAt(0) == 'a'){
                return 1;
            }else{
                return 4;
            }
        }
        if(S.charAt(0) != 'a'){
            modifiedS += "aa";
        }
        for(int i = 0; i < S.length(); i++){
            if(S.charAt(current) != 'a' && S.charAt(next) != 'a'){
                modifiedS += S.charAt(current);
                modifiedS += "aa";
            }
            else if(
                    S.charAt(current) == 'a' && S.charAt(next) != 'a' ||
                    S.charAt(current) != 'a' && S.charAt(next) == 'a'
            ){
                modifiedS += S.charAt(current);
                modifiedS += "a";
            }

            else if(S.charAt(current) == 'a' && S.charAt(current) == S.charAt(next)){
                modifiedS += "aa";
                current += 2;
                next += 3;
            }

            current += 1;
            next += 2;
        }
        return modifiedS.length() - S.length();
    }

    public static void main(String[] args) {
        System.out.println(solution("aabab"));
    }
}
