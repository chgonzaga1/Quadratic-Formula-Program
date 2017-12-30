
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




