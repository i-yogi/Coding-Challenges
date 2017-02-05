import java.util.*;
import java.io.*;

public class StringPermtnHash{

	private static void compareString(String one, String two){
		if( one.length() != two.length()) 
			System.out.println("String are different lenght. Not Permutaion.");
		else{
			Map<Character, Integer> oMap = new HashMap<>();
			for( int i = 0; i< one.length(); i++)
				oMap.put( one.charAt(i), i);

			System.out.println("String's HashMap :"+oMap);

			for( int i = 0; i< two.length(); i++)
				if(!oMap.containsKey(two.charAt(i))){
		System.out.println("String's not permutaion ->"+two.charAt(i));
					return;
				}
		
			System.out.println("String's are permutaion");
		}
	}	

	public static void main( String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter String 1: ");
		String one = sc.next();
		System.out.println("Enter String 2: ");
		String two = sc.next();

		System.out.println("String 1: "+one);
		System.out.println("String 2: "+two);

		StringPermtnHash obj = new StringPermtnHash();
		obj.compareString(one, two);
	}
}