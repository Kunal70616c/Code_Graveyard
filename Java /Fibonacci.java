import java.util.*;
public class Fibonacci {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Range:");
		int n =sc.nextInt();
		int ft=0;
		int st=1;
		int i;
		System.out.println("Fibonacci Till "+ n +" terms:");
		for(i=1;i<=n;++i) {
			System.out.print(ft + "-");
			int nt= ft+st;
			ft = st;
			st = nt;
		}
	}

}
