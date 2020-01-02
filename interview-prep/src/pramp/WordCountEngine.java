package pramp;

import java.util.*;

public class WordCountEngine {
    public static void main(String[] args) {
        WordCountEngine wce = new WordCountEngine();
        wce.main();
    }
    void main(){
        String input = "\"Practice makes perfect. you'll only\n" +
                "                    get Perfect by practice. just practice!\"";
//        String input = "I a'm good. And that's bad, I'll never be good, and that's not bad!!! bad is beauty";
        char[] arr = new char[input.length() + 1];
        int i = 0;
        for(char c: input.toCharArray()){
            arr[i++] = c;
        }
        arr[i] = '\0';
        String str = "";
        List<String> sarr = new ArrayList<>();
        int s = 0;
        i = 0;
        while(arr[i]!= '\0'){
            if(
                    (arr[i] >='A' && arr[i] <= 'Z') ||
                    (arr[i] >='a' && arr[i] <= 'z')
            ){
                str+= Character.toLowerCase(arr[i]);
            }
            else if(arr[i] == ' '){
                if(!str.equals("")){
                    sarr.add(str);
                    str = "";
                }
            }
            i++;
        }
        if(!str.equals("")){
            sarr.add(str);
            str = "";
        }

        Map<String, Integer> map = new LinkedHashMap<>();
        for(i = 0; i < sarr.size(); i++){
            map.put(sarr.get(i), map.getOrDefault(sarr.get(i),0) + 1);
        }

        List<List<String>> output = new ArrayList<>();
        for(Map.Entry<String, Integer> entry : map.entrySet()){
            List<String> tempList = new ArrayList<>();
            tempList.add(entry.getKey());
            tempList.add(entry.getValue()+"");
            output.add(tempList);
        }

        int j = 0;
        for( i = 0; i < output.size(); i++){
            for( j = i+1; j < output.size(); j++){
                if(
                        Integer.parseInt(output.get(i).get(1)) < Integer.parseInt(output.get(j).get(1))
                ){
                    List<String> tempStringList = output.get(i);
                    output.set(i,output.get(j));
                    output.set(j,tempStringList);
                }
            }
        }
        System.out.println(output);
        //int x = 0;
    }
}
