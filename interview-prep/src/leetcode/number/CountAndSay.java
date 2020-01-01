package leetcode;

class CountAndSay {
    public  String countAndSay(int n) {
            String out = "1";
    //        System.out.println("1");
            for(int i = 2; i <= n; i++){
                out = cs(out);
                // System.out.println(out);
            }
            return out;
    
        }
        public  String cs(String s){
            String out = "";
            for(int i = 0; i < s.length();i++){
                int count = 1;
                int j;
                for(j = i + 1; j < s.length() && s.charAt(i) == s.charAt(j); j++){
                    // System.out.println("!!!: " + count);
                    count++;
                }
                out += ""+count + s.charAt(i);
    //            System.out.println("!!!: " + out);
                i = j - 1;
            }
    //        System.out.println(out);
            return out;
        }
    }