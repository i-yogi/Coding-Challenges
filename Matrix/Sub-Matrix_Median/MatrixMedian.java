import java.util.*;
import java.io.*;

public class MatrixMedian{

	private int[][] acceptMatrix(Scanner sc, int m[][], int r, int c){
		for( int i=0; i<r; i++)
			for( int j=0; j<c; j++)
				m[i][j] = sc.nextInt();
		return m;
	}

	private void displayMatrix(int m[][], int r, int c){
		for( int i=0; i<r; i++){
			System.out.println();
			for( int j=0; j<c; j++)
				System.out.print(" "+m[i][j]+" ");
			System.out.println();
		}	
	}

	private void processQuery(int m[][], int qr[][], int n, int q){
	}
		
	public static void main(String arg[]) throws IOException{
		BufferedReader br = new BufferedReader(new FileReader(arg[0]));
		Scanner sc = new Scanner(br);
	
		MatrixMedian ob = new MatrixMedian();
			
		int n = sc.nextInt();
		int[][] m = new int[n][n];

		m = ob.acceptMatrix(sc, m, n, n);
		ob.displayMatrix(m, n, n);

		int q = sc.nextInt();
		int[][] qr = new int[q][4];				

		qr = ob.acceptMatrix(sc, qr, q, 4);
		ob.displayMatrix(qr, q, 4);
	}
}