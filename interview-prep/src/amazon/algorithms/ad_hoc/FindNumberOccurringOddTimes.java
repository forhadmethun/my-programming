package amazon.algorithms.ad_hoc;
/*
Given an array of positive integers. 
All numbers occur even number of times except one number which occurs odd number of times

https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

*/
public class FindNumberOccurringOddTimes {

    static int findNumberOccurringOddTimes(int arr[]){
        int ans = 0;
        for(int i=0;i<arr.length;i++){
            ans = ans ^ arr[i];
        }
        return ans;
    }

    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 2, 2, 1, 3};
        int ans = findNumberOccurringOddTimes(arr);
        System.out.println(ans);
    }
}
