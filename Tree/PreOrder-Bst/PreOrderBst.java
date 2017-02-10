import java.util.*;
import java.io.*;

public class PreOrderBst{

	public void checkBst(int ar[]){
		Stack<Integer> s = new Stack<>();
		int root = Integer.MIN_VALUE;

		for(int i=0; i< ar.length; i++){
			if(ar[i] < root){
				System.out.println();
				for(int j=0; j<ar.length; j++)
					System.out.print(" "+ar[j]+" ");
				System.out.println(" -> Not a valid BST");
				return;
			}

			while( !s.empty() && ar[i]>s.peek() ){
				root = s.peek();
				s.pop();
			}
			
			s.push(ar[i]);
		}
		
		System.out.println();
		for(int j=0; j<ar.length; j++)
			System.out.print(" "+ar[j]+" ");
		System.out.println(" -> Is a valid BST");
	}

	public static void main(String args[]) throws IOException{
		FileReader fr = new FileReader("in");
		BufferedReader br = new BufferedReader(fr);
		Scanner in = new Scanner(br);

		PreOrderBst ob = new PreOrderBst();
		
		int n = 0;
		if(in.hasNext())
			n = in.nextInt();

		for(int i=0; i<n; i++){
			int s = 0;
			if(in.hasNext())
				s = in.nextInt();	
			int ar[] = new int[s];
			for(int j=0; j<s; j++)
				ar[j] = in.nextInt();

			ob.checkBst(ar);
			//System.out.println();
			//for(int j=0; j<s; j++)
			//	System.out.print(" "+ar[j]+" ");
		}
	}
}