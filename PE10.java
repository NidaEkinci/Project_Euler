package ProjectEuler;

public class PE10 {
	
	static int checkPrime(long number) {
		int test = 1;
		for(long multiplier = 2; multiplier < number; multiplier++)
		{
			if(number % multiplier == 0)
			{
				test = 0;
				break;
			}
		}
		return test;
	}

	public static void main(String[] args) {
		
		long total = 0;
		for(long number = 2; number < 2000000; number++)
		{
			if(checkPrime(number) == 1) 
			{
				System.out.println(number + "+ ");
				total += number;
			}
		}
		
		System.out.println(" = " + total);

	}

}
