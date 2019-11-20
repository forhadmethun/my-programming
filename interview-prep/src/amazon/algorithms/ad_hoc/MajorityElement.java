package amazon.algorithms.ad_hoc;
/*
Write a function which takes an array and prints the majority element (if it exists), 
otherwise prints “No Majority Element”. 
A majority element in an array A[] of size n is an element that appears more than n/2 times 
(and hence there is at most one such element).

https://www.geeksforgeeks.org/majority-element/

*/
public class MajorityElement {
    //Moores voting algorithm
    static int findCandidate(int arr[]){
        int maxNumberIndex = 0, count = 1;
        for(int i=1;i<arr.length;i++){
            if(arr[i] == arr[maxNumberIndex]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                maxNumberIndex = i;
                count = 1;
            }
        }
        return arr[maxNumberIndex];
    }

    static int majorElement(int arr[]){
       int candidate = findCandidate(arr);
       int count = 0;
       for(int i=0;i<arr.length;i++){
           if(arr[i] == candidate)count++;
       }
       if(count*2>=arr.length)return candidate;
       else return -1;
    }


    public static void main(String[] args) {
//        int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
        int arr[] = {1, 3, 3, 2, 4};
        int majorElement = majorElement(arr);
        if(majorElement!=-1){
            System.out.println(majorElement);
        }else{
            System.out.println("No Majority Element");
        }
    }
}
