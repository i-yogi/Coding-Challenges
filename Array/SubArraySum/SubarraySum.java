// http://www.geeksforgeeks.org/find-subarray-with-given-sum/
// http://www.practice.geeksforgeeks.org/problem-page.php?pid=590

import java.io.*;
import java.util.*;

public class SubarraySum{

	private	static String input = "input.txt";
	private	static int noOfInputs = 0;
	private	static List<int[]> arrayList = new ArrayList<>();
	private	static int[] array;

	public static void main(String[] args){

		try{
			BufferedReader reader = new BufferedReader(new FileReader(input));
			Scanner in = new Scanner(reader);

			while(in.hasNext()){
				noOfInputs = in.nextInt();

				for(int i=0; i<noOfInputs; i++){
					
					int arraySize = in.nextInt();
					array = new int[arraySize+1];	 
					array[0] = in.nextInt();

					for(int j=1; j<=arraySize; j++){
						array[j] = in.nextInt();
					}
					arrayList.add(array);
				}
			}

			for(int j = 0; j<arrayList.size(); j++){

				int[] cur = arrayList.get(j);
	
				// for(int k = 0; k<cur.length; k++){
				// 	System.out.print(" "+cur[k]);
				// }
				// System.out.println();

				// simpleSum(cur);
				optmzdSimpleSum(cur);				
			}
		}
		catch (Exception e){
			e.printStackTrace();
		}
	}

//O(n) = n
	private static void optmzdSimpleSum(int[] arr){

		int sum = arr[0];
		int str = 1;
		int result = arr[1];

		for(int i=2; i<arr.length; i++){

			while(result >sum && str <(i-1)){

				result -= arr[str];
				str++;
			}

			if(result == sum){

				System.out.println(str+" "+(i-1));
				return;
			}
			else if(result < sum)
				result += arr[i];
		}

		System.out.println(-1);
	}	


//O(n) = n^2
	private static void simpleSum(int[] arr){

		int sum = arr[0];
		// System.out.println("Expected sum is-> "+sum);
		int result = 0;

		for(int i=1; i< arr.length-1; i++){

			result = arr[i];
			// System.out.println("Result is (i)->"+result);
			for(int j=i+1; j< arr.length; j++){

				if( result == sum){
					System.out.println(i +" "+ (j-1);
					return;
				} else if(result > sum)
					break;

				result += arr[j];
				// System.out.println("Result is (j)->"+result);
			}
		}

		System.out.println(-1);
	}
}