import java.math.BigInteger;
import java.util.Scanner;


public class advanced {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n;
		BigInteger rst,bigN;
		Scanner scan = new Scanner(System.in);
		String str;
		n = scan.nextInt();
		while (n != 0){
			bigN = new BigInteger(n+"");
			rst = bigN.pow(4);
			rst = rst.add(bigN.pow(3).multiply(BigInteger.valueOf(2)));
			rst = rst.add(bigN.pow(2));
			rst = rst.divide(BigInteger.valueOf(4));
			str = rst.toString();
			if(str.length()>=10){
				System.out.println(Long.parseLong((str.substring(str.length()-10))));
			}else{
				System.out.println(Long.parseLong(str));
			}
			n = scan.nextInt();
		}
	}

}