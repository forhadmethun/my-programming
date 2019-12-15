class RomanToInteger {
    public int romanToInt(String s) {
        char[] c = s.toCharArray();        
        int num = 0;        
        if(s.indexOf("IV")!=-1)num-=2;
        if(s.indexOf("IX")!=-1)num-=2;
        if(s.indexOf("XL")!=-1)num-=20;
        if(s.indexOf("XC")!=-1)num-=20;
        if(s.indexOf("CD")!=-1)num-=200;
        if(s.indexOf("CM")!=-1)num-=200;
        for(int i = 0; i < c.length; i++){
            if(c[i] == 'I')num+=1;
            else if(c[i] =='V')num+=5;
            else if(c[i] == 'X')num+=10;
            else if(c[i] == 'L')num+=50;
            else if(c[i] == 'C')num+=100;
            else if(c[i] == 'D')num+=500;
            else if(c[i] == 'M')num+=1000;
        }
        return num;        
    }
}