import java.util.*;

public class UniqueCharInStrg{

	public static void main(String[] args) {

		Set<Character> uniqueChars = new HashSet<>();
		
		if(args.length == 1){

			if(args[0].length() > 128)
				System.out.println("Error: String lenght > 128 ASCII chars");
			else{
				for(int i=0; i<args[0].length(); i++){
					boolean truth = uniqueChars.add(args[0].charAt(i));
					if(truth == false)
						System.out.println("String Contains duplicates!");				
				}
				System.out.println("String Contains No duplicates.");
			}
		}
		else System.out.println("Error: No String Passed!");
	}
}