package leetcode.string;

public class DefanginganIPAddress_1108 {
    public String defangIPaddr(String address) {
        return address.replaceAll("\\.", "[.]");
    }
}
