import java.math.BigInteger;
import java.util.Scanner;


public class dividing {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BigInteger bigN;
		Scanner scan = new Scanner(System.in);
		while(scan.hasNext()){
			String str = scan.next();
			bigN = new BigInteger(str,16);
			bigN = bigN.mod(BigInteger.valueOf(17));
			if(bigN.toString().equals("0")){
				System.out.println("yes");
			}else{
				System.out.println("no");
			}
		}
		
	}

}
