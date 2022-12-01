import java.util.*;
public class Author {

String firstname,lastname;

public Author(String firstname, String lastname) {
	setFirstname(firstname);
	setLastname(lastname);
	
}
	public String getFirstname() {
	return firstname;
}

public void setFirstname(String firstname) {
	this.firstname = firstname;
}

public String getLastname() {
	return lastname;
}
public String authorName(){
 String full;
System.out.println(getFirstname() +" "+ getLastname());	
 full = getFirstname() + getLastname();
	return full;
}

public void setLastname(String lastname) {
	this.lastname = lastname;
}

	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter First Name Of the author==> ");
	String fname=sc.nextLine();
	System.out.println("Enter Last Name Of the author==> ");
	String lname=sc.nextLine();
	Author temp=new Author(fname,lname);
	String fulll=temp.authorName();
	//System.out.println(fulll);
	
	}

}
