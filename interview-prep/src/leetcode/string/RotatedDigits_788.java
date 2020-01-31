package leetcode.string;

public class RotatedDigits_788 {
    public int rotatedDigits(int N) {
        int count = 0;
        for(int i = 1; i <= N; i++){
            if(
                    !((""+i).contains("3") ||
                            (""+i).contains("4") ||
                            (""+i).contains("7") )
            )
                if((""+i).contains("2") ||
                        (""+i).contains("5") ||
                        (""+i).contains("6") ||
                        (""+i).contains("9")


                )if(true
                    //!(""+i).equals(new StringBuilder(""+i).reverse().toString())

                ){
                    count++;
                    // System.out.println(i);

                }

        }
        return count;
    }
}
