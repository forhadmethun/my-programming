import java.util.HashMap;
import java.util.Map;

class Solution2 {
    public static String solution(String S, int K) {
        // write your code in Java SE 8
        Map<String, Integer> map = new HashMap<>();
        String[] days = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
        for(int i = 0; i < days.length; i++){
            map.put(days[i], i);
        }
        return days[(map.get(S) + K) % 7];


    }

    public static void main(String[] args) {
        String S = "Sat";
        int K = 7;
        System.out.println(solution(S,K));
    }
}
