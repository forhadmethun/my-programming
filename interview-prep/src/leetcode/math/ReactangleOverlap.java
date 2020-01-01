class ReactangleOverlap {
    public boolean isRectangleOverlap(int[] rec1, int[] rec2) {
        
        int x1 = rec1[0];
        int y1 = rec1[1];
        int x2 = rec1[2];
        int y2 = rec1[3]; 
        
        int x3 = rec2[0];
        int y3 = rec2[1];
        int x4 = rec2[2];
        int y4 = rec2[3]; 
        
        if(y2 <= y3 || x2 <= x3) return false;
        if( x4 <= x1 || y1 >= y4) return false;
        
        return true;
        
        
        
        /*
        int x1 = rec2[0];
        int y1 = rec2[1];
        int x2 = rec2[2];
        int y2 = rec2[3]; 
        
        int x3 = x2;
        int y3 = y1; 
        
        int x4 = x1;
        int y4 = y2; 
        if(
        isInsideRectangle(rec1, x1,y1) ||
        isInsideRectangle(rec1, x2, y2) ||
        isInsideRectangle(rec1, x3, y3) ||
        isInsideRectangle(rec1, x4, y4) 
        )return true;
        return false; 
        */
        
        
    }
    /*
    boolean isInsideRectangle(int[] rect, int x, int y){
        int x1 = rect[0];
        int y1 = rect[1];
        int x2 = rect[2];
        int y2 = rect[3]; 
        
        int x3 = x2;
        int y3 = y1; 
        
        int x4 = x1;
        int y4 = y2; 
        
        
        if(
            (x > x1 && y > y1 ) &&
            (x < x3 && y > y3)  &&
            (x > x4 && y < y4)  &&
            (x < x2 && y < y2)
          ) return true; 
        return false;
        
    }
    */
}