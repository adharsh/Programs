public class initIntVar{
	
	static int b;
	
	//variables must be initialized in java
	public static void main(String args[]){
		int a;
	//	System.out.println(a); error
		
		System.out.println("b:" + b);
		int c = b + 5;
		b += 4;
		System.out.println("c:" + c);
		System.out.println("b:" + b);
		
	/* static int variables are already intialized to 0 */
	}

}
