package leetcode.string;
import java.util.*;
public class UniqueEmailAddresses_929 {
    public int numUniqueEmails(String[] emails) {
        Set<String> set = new HashSet<>();
        for(String email : emails){
            String[] nameDomain = email.split("@");
            StringBuilder name = new StringBuilder();
            for(char c : nameDomain[0].toCharArray()){
                if(c== '+')break;
                name.append(c);
            }

            StringBuilder sb = new StringBuilder();
            for(char c : name.toString().toCharArray()){
                if(c!='.'){
                    sb.append(c);
                }
            }
            sb.append("@");
            sb.append(nameDomain[1]);
            set.add(sb.toString());
        }
        return set.size();
    }
}
