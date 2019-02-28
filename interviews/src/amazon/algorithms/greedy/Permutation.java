package amazon.algorithms.greedy;

public class Permutation {
    public static void main(String[] args) {
        String inputString = "abc";
        permutate(inputString);
        char[] characterArray = inputString.toCharArray();
//        swap(0, 1, characterArray);
//        System.out.println("a: " + characterArray[0] + " b:" + characterArray[1]);
        System.out.println("=====================");
        permutateBySwapping(characterArray,0,2);

    }

    static void permutate(String inputString) {
        permutate("", inputString);
    }

    static void permutate(String prefix, String suffix) {
        int length = suffix.length();
        if (length == 0) System.out.println(prefix);
        else {
            for (int i = 0; i < length; i++) {
                permutate(prefix + suffix.charAt(i),
                        suffix.substring(0, i) + suffix.substring(i + 1, length));
            }
        }
    }

    static void permutateBySwapping(char[] a,int l, int r){
        if(l==r){
//            System.out.println(a.toString());
            for(int i=0;i<a.length;i++){
                System.out.printf("%c",a[i]);
            }
            System.out.println();
        }
        else{
            for(int i=l;i<=r;i++){
                swap(i,l,a);
                permutateBySwapping(a,l+1,r);
                swap(i,l,a);
            }
        }
    }

    static void swap(int i, int j, char[] arr) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
