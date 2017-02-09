import java.util.*;

public class hashMap{

	private void guessCnB( int secret[], int guess[]){

		int bull =0, cow =0; 

		Map<Integer, Integer> secretMap = new HashMap<>();
		
		for( int i = 0; i< secret.length; i++)
			secretMap.put( secret[i], i);

		for( int i = 0; i< guess.length; i++)
			if( secretMap.containsKey(guess[i])){
				if( i == secretMap.get( guess[i]))
					bull++;
				else	cow++;
			}

		System.out.println("Cows-> "+cow+" Bull-> "+bull);
	}

	private void guessCowsNBulls( int secret[], int guess[]){

		int cow = 0, bull = 0;	
		Map< Integer , Integer> s = new HashMap<> ();

		for( int i = 0; i< secret.length; i++)
			s.put( secret[i], i);

		int res;
		for( int j = 0; j< guess.length; j++){
			if(s.get(guess[j]) != null){
				res = s.get(guess[j]);
				//System.out.println(res);
				if( res == j) bull++;
				else cow++; 
			}	
		}

		System.out.println("Cows-> "+cow+" Bull-> "+bull);
	}

	public static void main(String args[]){

		hashMap run = new hashMap();

		int secret[] = { 9, 2, 6, 8};

		int guess1[] = { 2, 4, 7, 8};
		int guess2[] = { 8, 6, 2, 9};
		int guess3[] = { 9, 2, 5, 7};

		//run.guessCnB( secret, guess1);
		//run.guessCnB( secret, guess2);
		//run.guessCnB( secret, guess3);

		run.guessCowsNBulls( secret, guess1);
		run.guessCowsNBulls( secret, guess2);
		run.guessCowsNBulls( secret, guess3);
	}
}