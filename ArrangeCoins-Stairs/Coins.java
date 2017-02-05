// import java.Math

public class Coins{

	public static void main(String[] args) {
		
		int coins = Integer.parseInt(args[0]);
		double sol = (Math.sqrt(1+coins*8)-1)/2;

		System.out.println(sol);
	}
}