package amazon.algorithms.greedy;

import java.util.*;

public class Permutation {
    public static void main(String[] args) {
        String inputString = "abc";
        System.out.println("--- Permutation by character extraction ----");
        permutate(inputString);
        char[] characterArray = inputString.toCharArray();
//        swap(0, 1, characterArray);
//        System.out.println("a: " + characterArray[0] + " b:" + characterArray[1]);
        System.out.println("--- Permutation by swapping positions -----");
        permutateBySwapping(characterArray, 0, 2);

        System.out.println("--- Permutation by bottom up -----");
        permutationBottomUp("abc");

        System.out.println("--- permutation of repetitive ---------");
        permutateIgnoringDuplicate("", "ccd");

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

    static void permutateIgnoringDuplicate(String prefix, String suffix) {
        int length = suffix.length();
        if (length == 0) {
            System.out.println(prefix);
            return;
        }
        boolean[] alpha = new boolean[26];
        for (int i = 0; i < length; i++) {

//            if(alpha[suffix.charAt(i) - 'a'] == false)permutate(prefix + suffix.charAt(i),
//                    suffix.substring(0, i) + suffix.substring(i + 1, length));
//            alpha[suffix.charAt(i) - 'a'] = true;

            char ch =  suffix.charAt(i);
            String ros = suffix.substring(0, i) + suffix.substring(i + 1, length);
            if(alpha[ch - 'a'] == false) permutateIgnoringDuplicate(prefix + ch, ros);
            alpha[ch - 'a'] = true;
        }

    }

    static void permutateBySwapping(char[] a, int l, int r) {
        if (l == r) {
//            System.out.println(a.toString());
            for (int i = 0; i < a.length; i++) {
                System.out.printf("%c", a[i]);
            }
            System.out.println();
        } else {
            for (int i = l; i <= r; i++) {
                swap(i, l, a);
                permutateBySwapping(a, l + 1, r);
                swap(i, l, a);
            }
        }
    }

    static void swap(int i, int j, char[] arr) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static void permutationBottomUp(String str) {
        List<String> perm = permutationBottomUp(str, str.length() - 1);
        for (String p : perm) {
            System.out.println(p);
        }
    }

    static List<String> permutationBottomUp(String str, int idx) {
        if (idx < 0) {
            List<String> strList = new ArrayList<>();
            strList.add("");
            return strList;
        }
        List<String> subsetList = permutationBottomUp(str, idx - 1);
        List<String> outputList = new ArrayList<>();
//        outputList.addAll(subsetList);
        for (String sub : subsetList) {
//        for(int i = 0; i < subsetList.size(); i++){
            for (int i = 0; i <= sub.length(); i++) {
                outputList.add(sub.substring(0, i) + str.charAt(idx) + sub.substring(i));
            }
        }
        return outputList;
    }


}
