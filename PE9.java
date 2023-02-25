//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a2 + b2 = c2
//There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
package ProjectEuler;

public class PE9 {

	public static void main(String[] args) {
		
		for(int a = 1; a <= 1000; a++)
		{
			for(int b = a + 1; b <= 1000; b++)
			{
				double squared = Math.pow(a, 2) + Math.pow(b, 2);
				double c = Math.pow(squared, 0.5);
				if(a + b + c == 1000)
				{
					long answer = (long)(a * b * c);
					System.out.println("a.b.c = " + answer);
					break;
				}
			}
		}
	}
}
