import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class paren 
{
    public static void main(String[] args) 
    {

        Scanner scan = new Scanner(System.in);
	      Stack<Character> stk = new Stack<Character>();
        String exp = scan.next();        
        int len = exp.length();
        for (int i= 0;i<len;i++)
	      {    

            char ch = exp.charAt(i);
	          if (ch == '(')
	          {
		          stk.push((char)i);
	          }
            else if (ch == ')')
            {

                try
		            {
                    stk.pop();
		            } 
                catch(Exception e){

                    //System.out.println("Cannot be popped");
                    //e.printStackTrace();
                }

            }            

        }
	if(stk.isEmpty())
	{
	    System.out.println("CORRECT");
	}
	else{
	      System.out.println("INCORRECT");
	}

   }
}
