import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int test = scan.nextInt();
		while(test > 0){
		    int n = scan.nextInt();
		    int[] array = new int[n];
		    for(int i=0;i<n;i++){
		        array[i] = scan.nextInt();
		    }
		    Arrays.sort(array);
		    int c=0;
		    for(int i=0;i<n-1;i++){
		        if(array[i] == array[i+1]){
		            c++;
		        }
		    }
		    System.out.println(c);
		    test = test - 1;
		}
	}
}
