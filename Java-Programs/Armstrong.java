import java.util.Scanner;
import java.lang.Math;
public class Armstrong {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Number You Want To Check:");
		int n =sc.nextInt();
		int ognum,rem;
		double result=0;
		ognum=n;
		while(ognum!=0) {
			rem=ognum%10;
			result+=Math.pow(rem, 3);
			ognum /=10;			
		}
		if(result==n)
			System.out.println(n+" is a Armstrong Number");
		else
			System.out.println(n+" is a not Armstrong Number");
	}

}
