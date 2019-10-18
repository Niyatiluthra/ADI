import java.util.Scanner;
public class ZAlgo
{
    public static void main(String a[])
    {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        String substr=sc.next();
        int j=0,c=0;
        int arr[]=new int[str.length()];
        for(int i=0;i<str.length();i++)
        {
            if(j==substr.length())
                j=0;
            if(substr.charAt(j)==str.charAt(i))
            {
               
                c++;
                if(c==substr.length())
                {
                    arr[i-j]=1;
                    c=0;
                }
                 j++;
                
            }
            else
            {
                c=0;
                j=0;
            }
        }
        for(int i=0;i<str.length();i++)
         if(arr[i]==1)
                System.out.println(i);
    }
}