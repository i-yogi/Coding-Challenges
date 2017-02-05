import java.io.*;
import java.util.*;

public class FirstOccurance{

	public static void main(String[] args) {

		// List<String> names = new ArrayList<>();
		Set<String> uniqueNames = new HashSet<>();
		
		try{
			Scanner scan = new Scanner(new File("input.txt"));

			while(scan.hasNext()){
				scan.useDelimiter("\\s*,\\s*");
				boolean truth = uniqueNames.add(scan.next().toString());
				if(truth == false)
					System.out.println("Duplicate Entry!");
				// names.add(scan.next().toString());
				// System.out.println(scan.next().toString());
			}
		}
		catch (Exception e) {
   			System.err.println("Caught IOException: " + e.getMessage());
		}

		for(String curName : uniqueNames)
			System.out.println(curName);
	}
}
