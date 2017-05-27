import java.util.*;
public class str2
{

     public static void main(String []args)
     {
        System.out.println("Enter the sentence");
        Scanner in = new Scanner(System.in);
        String l=in.nextLine();
        System.out.println("Enter the word");
        String ll = in.next();
        l = l+" ";
        String temp="";
        String newstr = "";
        for(int i=0;i<l.length();i++)
        {
            char x=l.charAt(i);
            temp = temp + x;
	    /*if(x!=' ')
	    {
            	temp = temp + x;
	    } */           
	   // else
            //{
		if(ll.equals(temp))
            	{
                    //newstr = newstr;
            	}
		else
		{
			newstr = newstr + temp;
			newstr = newstr + "";
		}
		temp = "";
	    	
	    //}
            
        }
         System.out.println(newstr);
     }
    
}

