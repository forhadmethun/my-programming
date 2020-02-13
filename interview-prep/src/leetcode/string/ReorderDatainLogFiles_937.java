package leetcode.string;
import java.util.*;

public class ReorderDatainLogFiles_937 {
    public String[] reorderLogFiles(String[] logs) {
        List<String> digitLogs = new ArrayList<>();
        Set<String> letterLogsMap = new TreeSet<>();
        for(String log : logs){
            if(isDigitLog(log)){
                digitLogs.add(log);
            }else{
                String[] splittedLog = log.split(" ");
                StringBuilder sb = new StringBuilder();
                for(int i = 1; i < splittedLog.length;i++){
                    if(i != 1)sb.append(" ");
                    sb.append(splittedLog[i]);

                }
                letterLogsMap.add(sb.toString() + "&" + splittedLog[0]);
            }
        }
        String[] result = new String[letterLogsMap.size() + digitLogs.size()];
        int index = 0;
        for(String str : letterLogsMap){
            String[] sp = str.split("&");
            result[index++] = sp[1] + " " + sp[0];
        }
        for(String digitLog : digitLogs){
            result[index++] = digitLog;
        }
        return result;

    }
    boolean isDigitLog(String log){
        String[] splittedLog = log.split(" ");
        for(int i = 1; i < splittedLog.length; i++){
            if(splittedLog[i].matches("-?\\d+"))return true;
            return false;
        }
        return true;
    }
}
