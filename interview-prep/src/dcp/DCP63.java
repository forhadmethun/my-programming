package dcp;
public class DCP63{
	public static void main(String[]  args) {
		char[][] matrix = {{'F', 'A', 'C', 'I'} ,
 {'O', 'B', 'Q', 'P'} ,
 {'A', 'N', 'O', 'B'} ,
 {'M', 'A', 'S', 'S'}} ;
 String inputString = "FOAM" ;
		if(checkIf2DMateixContaisStringFromUpDownOrLeftRight(matrix, inputString)) {
			System.out.println("Exists");
		}else {
			System.out.println("Not exits");
		}
	}
	
		static boolean checkIf2DMateixContaisStringFromUpDownOrLeftRight(char[][] matrix, String inputString){
			for(char[] eachCharList: matrix){
				if(inputString.equals(new String(eachCharList)))return true;
			}
			for(int i=0; i< matrix.length; i++){
				String topDownString ="";
				for(int j=0;j<matrix[i].length;j++){
					topDownString += matrix[j][i];
				}
				//System.out.println(topDownString);
				if(topDownString.equals(inputString))return true;
			}

        return false;
		} 
	
	
} 
