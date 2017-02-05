import java.util.*;

public class OnePass{

	private static void charArray( char in[], int s){
		
	}

	public static void main(String args[]){
		//Scanner sc = new Scanner(System.in);
		//System.out.print("Input string with white spaces:");
		//String in = sc.nextLine();
		
		OnePass obj = new OnePass();
		//obj.stringBuilder(in);
		
		String chr = "Yogesh Isawe 1991      ";
		char ar[] = chr.toCharArray();
		System.out.println("In String -> "+ chr+" and length -> "+chr.length());
		//System.out.println("In String to Array len-> "+ ar.length);

		obj.charArray( ar, 17);
	}
}