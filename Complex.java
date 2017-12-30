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

