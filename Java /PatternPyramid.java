import java.util.Scanner;
public class PatternPyramid {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Limit:");
		int n =sc.nextInt();
		int i,j;
		for (i=0; i<n; i++) {
            for (j=n-i; j>1; j--){
            	System.out.print(" ");
            }
            for (j=0; j<=i; j++ ){
                System.out.print("* ");
            }
            System.out.println();
        }
	}

}
