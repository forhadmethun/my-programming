package leetcode.math;

public class DayoftheYear_1154 {
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    public int dayOfYear(String date) {
        String[] d = date.split("-");
        int dayCount = 0;
        int yy = Integer.parseInt(d[0]);
        int mm = Integer.parseInt(d[1]);
        int dd = Integer.parseInt(d[2]) ;

        for(int i = 1; i < mm; i++){
            dayCount += months[i-1];
            if(i == 2 && isLeap(yy))dayCount++;

        }
        dayCount+= dd;
        return dayCount;
    }
    boolean isLeap(int y){
        return ((y%4 == 0 && y%100 !=0) || y%400 == 0);
    }
}
