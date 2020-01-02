package leetcode.array;

import java.util.*;

class PascalsTriangle {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> pascalTriangle  = new ArrayList<>();
        List<Integer> firstRow = new ArrayList<>(); 
        List<Integer> secondRow = new ArrayList<>();
        firstRow.add(1);
         if( numRows == 0) return pascalTriangle; 
        pascalTriangle.add(firstRow); 
        if( numRows == 1) return pascalTriangle; 
        
        secondRow.add(1);
        secondRow.add(1);
        pascalTriangle.add(secondRow); 
        if(numRows == 2) return pascalTriangle;
        
        
        for(int i = 2; i < numRows; i++){
            List<Integer> currentRow = new ArrayList<>();
            currentRow.add(1); 
            for(int j = 1; j < pascalTriangle.get(i-1).size() ; j++){
                currentRow.add(pascalTriangle.get(i-1).get(j) + pascalTriangle.get(i-1).get(j-1));
            }
            currentRow.add(1);
            pascalTriangle.add(currentRow);            
        }
        return pascalTriangle;
        
    }
}