import java.util.Scanner;
class DiceCup{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n, m, a, b; 
		n = sc.nextInt(); 
		m = sc.nextInt(); 

		b = Math.max(n,m);
		a = Math.min(n,m);

		for(int i = a + 1; i <= b+1; i++){
			System.out.println(i);
		}
	}
}
