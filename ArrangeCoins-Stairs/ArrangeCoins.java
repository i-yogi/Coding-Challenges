import java.util.*;
import java.io.*;


public class ArrangeCoins{

	public static void main(String[] args) throws Exception{
		List<Integer> coins = new ArrayList<>();

		Scanner in = new Scanner(new File("inp.txt"));
		while(in.hasNext())
			coins.add(in.nextInt());

		for(int cur: coins){

			int cns = cur;
			int count = 0;

			for(int i=1; i<=cur; i++){
				// cns -= i;
				if((cns -= i) >= 0)
					count++;
				else break;
			}
			System.out.println(count);
		}
	}
}