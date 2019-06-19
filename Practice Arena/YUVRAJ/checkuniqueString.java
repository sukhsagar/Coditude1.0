
import java.util.Arrays;
import java.util.Scanner;
public class checkuniqueString {
    public static void main(String[] args) {
        String s;
        boolean b=true;
        System.out.println("Enter any String");
        Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        char[] str=s.toCharArray();
        Arrays.sort(str);
        for(int i=0;i<str.length-1;i++)
        {
            if(str[i]==str[i+1])
            {
                b=false;
                break;
            }
        }
        if(b==false){
            System.out.println("String is does not unique charaters");
        }
        else{
            System.out.println("String Contains unique charaters");
        } 
    }
}
