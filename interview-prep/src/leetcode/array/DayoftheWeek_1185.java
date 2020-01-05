package leetcode.array;

public class DayoftheWeek_1185 {
    /*zeller formula copy pasted*/
        /*
        String[] days = new String[]{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        */
    public String dayOfTheWeek(int d, int m, int y) {
        /*
        if (m < 3) {
            m += 12;
            y -= 1;
        }
        int c = y / 100;
        y = y % 100;
        int w = (c / 4 - 2 * c + y + y / 4 + 13 * (m + 1) / 5 + d - 1) % 7;
        return days[(w + 7) % 7];
        */
        /*
        int today = daysFromStart(31, 12, 2019);
        int cnt = daysFromStart(d, m, y);

        return days[(( (today - cnt) %7 + 7 ) %7)]; //kufc this line, why cnt need to be earlier than today?? why the substraction should be like this!!!
        */
        int curr = daysFromStart(31, 12, 2019);
        int cnt = daysFromStart(d, m, y);
        return days[((cnt - curr) % 7 + 7) % 7];



    }
    // String[] days = new String[]{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    String[] days = {"Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday"};
    /*
    int daysInMonth[] = {31, 28, 31, 30,31, 30, 31, 31, 30, 31, 30,31};
    int daysFromStart(int day, int month, int year){
        int sum = 0;
        for(int i = 1971; i < year; i++){
            sum+=365;
            if(isLeap(i))sum++;
        }
        for(int i = 1; i < month; i++){
            sum+=daysInMonth[i-1];
            if(i == 2 && isLeap(year))sum++;
        }
        sum+= (day - 1);
        return sum;


    }
    boolean isLeap(int y){
        if((y%4 == 0 && y%100 !=0) || (y%400 == 0))return true;
        return false;
    }
    */
    int[] months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    private int daysFromStart(int day, int month, int year) {
        int sum = 0;
        for (int i = 1971; i < year; i++) {
            sum += 365;
            if (isLeapYear(i)) {
                sum++;
            }
        }
        for (int i = 1; i < month; i++) {
            sum += months[i - 1];
            if (i == 2 && isLeapYear(year)) {
                sum++;
            }
        }
        sum += day - 1;
        return sum;
    }

    private boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }

}
