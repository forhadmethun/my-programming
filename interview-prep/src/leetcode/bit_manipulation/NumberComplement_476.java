package leetcode.bit_manipulation;

public class NumberComplement_476 {
    public int findComplement(int num) {
        if(num == 0)return 1;
        int temp = num;
        int count = 0;
        while(temp!=0){
            count++;
            temp>>=1;
        }
        int output = num;
        for(int i = 0; i < count; i++){
            if(isSet(num, i)){
                output = output & ~(1 << i);
            }
            else{
                output = output | (1 << i);
            }
        }
        return output;
    }
    boolean isSet(int num, int pos){
        return (num & (1 << pos)) > 0;
    }
    /*
    1. find how many binary digits until leading zero
        int temp = num;
        int count = 0;
        while(temp!=0){
            count++;
            temp>>=1;
        }
    2. until count flip each bit b
        if b is set then unset it
        else set b


    #toggle bit at n'th position
      shift 1 to n'th time and compute & operation and check if positive then set else not set
      if not set
        just or with 1 << n
      else
        b & ~(1<<n)


    */
}
