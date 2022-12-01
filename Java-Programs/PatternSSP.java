import java.util.Scanner;
public class PatternSSP {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Limit:");
		int rows =sc.nextInt(); 
		 //Printing the pattern
        for (int i = 1; i <= rows; i++)
        {
          for (int j = 1; j < i; j++)
            {
                System.out.print(" ");
            }
          for (int j = i; j <= rows; j++)
            {
                System.out.print("* ");
            }  
            System.out.println();
        }
        
 
       //Printing the reverse pattern
        for (int i = rows-1; i >= 1; i--)
        {
          for (int j = 1; j < i; j++)
            {
                System.out.print(" ");
            } 
          for (int j = i; j <= rows; j++)
            {
                System.out.print("* ");
            }  
            System.out.println();
        }
        
	}

}
