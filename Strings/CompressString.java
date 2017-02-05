public class CompressString{

	public static void main(String[] args) {
		int srt = 0, end=0;

		if(args.length >0){
			StringBuilder in = new StringBuilder(args[0]);

			for(int i =0; i<in.length()-1;i++){
				boolean flag = false;
				System.out.println(i);

				if(in.charAt(i) == in.charAt(i+1)){
					flag = true;
					srt = i;
				}
				while( i<in.length()-1 && in.charAt(i) == in.charAt(i+1)){
					i++;
				}
				end = i;

				if(flag){
					System.out.println(srt +" "+ end);

					StringBuilder re = new StringBuilder();
					re.append(in.charAt(srt));
					re.append(end-srt+1);
					System.out.println(re);

					in.replace(srt, end+1, re.toString());			
					System.out.println(in);

					i = srt+1;
				}
			}
			System.out.println(in.toString());
		}
		else
			System.out.println("NO String!");
	}
}