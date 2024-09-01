import java.util.*;
class main
{
    public static void main(String args[])
    {
        String s[]={"apple","application","apollo"};
        String alph="abcdefghijklmnopqrstuvwxyz";
        int sum=0;
        for(int i=0;i<alph.length();i++)
        {
            int c=0;
            for(int j=0;j<s.length;j++)
            {
                if(s[j].contains(Character.toString(alph.charAt(i)))==true)
                c++;
            }
            if(c>1)
            sum+=c;
        }
        System.out.print(sum);
    }
}