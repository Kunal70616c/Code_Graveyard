
public class Nonprime {

	public static void main(String[] args) {
		int i;
		int low=101;
		int high=150;
		while(low<=high) {
			for(i=2;i<=low/2;++i)
				if(low%i==0) {
					System.out.print(low+" ");
					break;
				}
					++low;
		}
	}

}
