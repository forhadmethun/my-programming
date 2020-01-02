package codes.ch3;

import java.util.Arrays;

public class Q3_1 {
    static class Stack{
        int frontIndex;
        int rearIndex;
        int arr[];
        Stack(int frontIndex, int rearIndex,int arr[]){
            this.frontIndex = frontIndex;
            this.rearIndex = rearIndex;
            this.arr = arr;
        }
        void push(int data){
            if(frontIndex == rearIndex){
                System.out.println("Stack is full");
                return;
            }
            frontIndex++;
            this.arr[frontIndex] = data;

        }
        void pop(){
            this.frontIndex--;
        }
        int front(){
           return arr[frontIndex];
        }

    }
    public static void main(String[] args){
        // let n is greater than 9 & divisor of 3 as 3 stack need to be built
        int n = 12;
        int arr[] = new int[n];
        Stack s1 = new Stack(0 -1 , n/3 -1,arr);
        Stack s2 = new Stack(n/3 -1 , (n/3) * 2 -1, arr);
        Stack s3 = new Stack((n/3)*2  -1, n-1, arr );
        s1.push(2);
        s1.push(3);
        s1.push(4);
        s1.push(5);
//        s1.push(5);
        s1.pop();

        s2.push(2);
        s3.push(2);
        Arrays.stream(arr).forEach(System.out::println);



    }
}
