package quadraticSolver;
import java.util.Scanner;
import java.lang.Math;




public class SolveEquation {
	
	public static double a;
	public static double b;
	public static double c;
	public static double determinant;
	public static double ba;
	public static double bb;
	static Scanner scan = new Scanner(System.in);


	 
	    
	 
	
		
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println("Hello, to the Quadratic Solver");
		System.out.println();
		System.out.println("Reminder:The Quardratic Formula is a * x^2+ b * x + c = 0" );
		System.out.println("Please type in the coefficent of a >");
		a = scan.nextInt();
		System.out.println("Now please type in b >");
		b = scan.nextInt();
		System.out.println("Finally, type in the constant c >");
		c = scan.nextInt();
		
		
		
		//have to leave the determine variable here or the b will not be read
		//VERY IMPORTANT you type this in (Math.pow(b, 2))
		determinant = (Math.pow(b, 2))-4*a*c;
		System.out.println("Your Determinant is: " +determinant);
		
		Complex.determineComplexNum();
		//Solving the quadratic equations.
		//Its best you solve it AFTER THEY HAVE BEEN SCANNED
		//And the determinant has already been found.
		ba = Quadratic.solveX1();
				
		
		System.out.println("Your x1: "+ba);
		
		bb = Quadratic.solveX2();
		
		
		
		System.out.println("Your x2: "+bb);
	
		Complex Czar = new Complex(Complex.getReal(), Complex.getImaginary());
		
		if(determinant <0)
		{
		System.out.println(Czar.toString());
		}
		
		
		
	}

}
