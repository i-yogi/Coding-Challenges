import java.util.*;
import java.io.*;

public class MtrxMdn{

	public void subArray(int m[][], int ns, int r[][], int q){
		//For all queries
		for( int i = 0; i< q; i++){
			int r1 = r[i][0], c1 = r[i][1], r2 = r[i][2], c2 = r[i][3]; 
			int c, d, k = 0;
			List<Integer> ar = new ArrayList<>();
			for( c = (r1-1); c<= (r2-1); c++)
				for( d = (c1-1); d<= (c2-1); d++){
					ar.add(m[c][d]);
	
				}
				Collections.sort(ar);
				int s = ar.size();
				if( s==1 ) System.out.println(ar.get(0));
				else if( (s%2)==0 ){
					int med = ( (ar.get( (s/2) ) + ar.get( (s/2)-1 )) )/2;
					System.out.println( med );
				} else{
					System.out.println(ar.get( (s/2) ));
				}
		}
	}
	
	public void display( int m[][], int r, int c){
		int j;
		for( int i = 0; i< r; i++){
			System.out.println();
			for( j = 0; j< c; j++)
				System.out.print(" "+m[i][j]+" ");	
		}
	}
	
	public static void main(String args[]) throws IOException{
		
		FileReader fr = new FileReader("in");
		BufferedReader br = new BufferedReader(fr);
		Scanner sc = new Scanner(br);

		//Input Matrix
		int n = 0, i, j;
		if(sc.hasNext())
			n = sc.nextInt();
		int m[][] = new int[n][n];
		for( i = 0; i< n; i++)	
			for( j = 0; j< n; j++)
				if(sc.hasNext())
					m[i][j] = sc.nextInt();
		MtrxMdn ob = new MtrxMdn();
		//ob.display(m, n, n);

		//Input Query
		int q = 0;
		if(sc.hasNext())
			q = sc.nextInt();
		int r[][] = new int[q][4];
		for( i = 0; i< q; i++)	
			for( j = 0; j< 4; j++)
				if(sc.hasNext())
					r[i][j] = sc.nextInt();
		//ob.display(r, q, 4);

		ob.subArray(m, n, r, q);
	}
}