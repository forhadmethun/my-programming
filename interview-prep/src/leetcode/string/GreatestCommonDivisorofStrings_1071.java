package leetcode.string;

public class GreatestCommonDivisorofStrings_1071 {
    public String gcdOfStrings(String str1, String str2) {
        /*
        String small, big;
        if(str1.length() > str2.length()){
            big = str1;
            small = str2;
        }else{
            big = str2;
            small = str1;
        }
        while(small.length()!=0){
            if(str1.contains(small) && str2.contains(small) && (str1.length() % small.length() == 0) && (str2.length() % small.length() == 0)){
                return small;
            }
            small = small.substring(1);
        }
        */

        String small, big;
        if(str1.length() > str2.length()){
            big = str1;
            small = str2;
        }else{
            big = str2;
            small = str1;
        }

        for(int i =0; i < small.length(); i++){
//             int d = small.length() / i;

//             String temp = "";
//             for(int j = 0; j < )

            String subSmall = small.substring(0, small.length() - i);


            StringBuilder sb = new StringBuilder(subSmall);
            while(sb.length() <= big.length()){
                if(big.equals(sb.toString())){
                    String temp = "";
                    //System.out.println(temp);
                    while(temp.length() < small.length()){
                        //System.out.println(temp);
                        temp += subSmall;
                    }
                    if(temp.equals(small))

                        return subSmall;
                }

                sb.append(subSmall);
            }
        }
        return "";
    }
}
