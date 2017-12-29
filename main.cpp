package quadraticSolver;



public class Complex {
    private static double real = 0;   // the real part
    private static double imaginary = 0;   // the imaginary part
    private static double potentialNum = 0;//determines if its complex or not
    // create a new object with the given real and imaginary parts
    
    public Complex(double real, double imaginary) {
    
    	real = -SolveEquation.b/(2*SolveEquation.a);
    	imaginary = SolveEquation.determinant/(2*SolveEquation.a);
    
    }
    
   
    public String toString()
	{
		
		
	     return Complex.getReal() + " - " + (-Complex.getImaginary()) + "i" +"\n"
	      +Complex.getReal() + " + " +Complex.getImaginary() + "i";
		
	     
		
	}
    


    public static double getReal() {
    	real = -SolveEquation.b/(2*SolveEquation.a);
		return real;
	}



	public static void setReal(double real) {
		Complex.real = real;
	}



	public static double getImaginary() {
		//To avoid NaN, I multiply the square root by -1
		double boo = Math.sqrt(SolveEquation.determinant*-1);
		imaginary = boo/(2*SolveEquation.a);
		return imaginary;
	}
	


	public static void setImaginary(double imaginary) {
		Complex.imaginary = imaginary;
	}



	public static double getPotentialNum() {
		return potentialNum;
	}



	public static void setPotentialNum(double potentialNum) {
		Complex.potentialNum = potentialNum;
	}

	public static void determineComplexNum()
	{
		if(SolveEquation.determinant > 0.0)
		{
			System.out.println("There are two distinct real roots");
			
		}
		else if(SolveEquation.determinant == 0)
		{
			System.out.println("There is only one real root..or double real roots");
		}
		else
		{
			System.out.println("You have a complex number");
			
		}
	
		
	}


	// sample client for testing
    public static void main(String[] args) {
        //test
    }

}



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


package quadraticSolver;
import java.lang.Math;



public class Quadratic{

	// compute positive root
   public static double positive_root;
    // compute negative root
   public static double negative_root;
	
   private static double x1;
   
   private static double x2;
   
   private static double temp1 = Math.sqrt(SolveEquation.determinant);
    
	public Quadratic(double positive_root, double negative_root) {
		super();
		this.positive_root = positive_root;
		this.negative_root = negative_root;
	}


	
	
	public static double getX1() {
		return x1;
	}




	public void setX1(double x1) {
		this.x1 = x1;
	}




	public double getX2() {
		return x2;
	}




	public void setX2(double x2) {
		this.x2 = x2;
	}

	
	
	public static double solveX1(){//DO NOT PUT solveX1(double x) not adding a parameter
									// you're just solving it
		double bahs = (-SolveEquation.b+temp1);
				
		x1 = bahs/(2*SolveEquation.a);
		return x1;
	}

	public static double solveX2(){
		
	 double bahs2 = (-SolveEquation.b-temp1);
     x2 = bahs2/(2*SolveEquation.a);
		return x2;
	}
	
	
	
	
	public static double computeNegativeRoot()
	{
		negative_root = (-SolveEquation.b)-Math.sqrt(SolveEquation.determinant);

		
		return negative_root;
	
	}
	
	

	public double getPositive_root() {
		return positive_root;
	}



	public void setPositive_root(double positive_root) {
		this.positive_root = positive_root;
	}



	public double getNegative_root() {
		return negative_root;
	}



	public void setNegative_root(double negative_root) {
		this.negative_root = negative_root;
	}





public static void main(String[] args) {
	// TODO Auto-generated method stub
	

	System.out.println("this is a test");
	

	

}

}
