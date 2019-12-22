class AddDigits {
    // http://applet-magic.com/digitsummod9.htm
    public int addDigits(int num) {
        if(num == 0 ) return 0;
        return num % 9 == 0 ? 9 : num % 9;
    }
}