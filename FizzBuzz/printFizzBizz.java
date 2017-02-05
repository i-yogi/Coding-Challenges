import java.io.*;
import java.util.*;

public class dexcom{
	public static void main(String[] args){
		try{
			BufferedReader br = new BufferedReader(new FileReader("inp.txt"));
			Scanner in = new Scanner(br);

			// int f = Integer.parseInt(in.next());
			int f = in.nextInt();
			System.out.println(f);

			int b = Integer.parseInt(in.next());
			System.out.println(b);

			int n = Integer.parseInt(in.next());
			System.out.println(n);

			for(int i=1; i<=n; i++){
				if((i%f) == 0)
					System.out.print("f ");
				else
					if((i%b) == 0)
						System.out.print("b ");					
				else
					if((i%f) == 0 && (i%b) == 0)
						System.out.print("fb ");
				else System.out.print(i+" ");
			}
		}
		catch(IOException e){
			e.printStackTrace();
		}
	}
}