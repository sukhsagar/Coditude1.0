
import java.util.Scanner;

public class megreArray {
    public static void main(String[] args) {
        int a[]=new int[20];
        int b[]=new int[20];
        int c[]=new int[20];
        Scanner sc = new Scanner(System.in);
        System.out.println("enter size of both arrays");
        int m=sc.nextInt();
        int n=sc.nextInt();
        int check=0;
        System.out.println("Enter First Array");
        for(int i=0;i<m;i++)
        {
            a[i]=sc.nextInt();
            
        }
        System.out.println("Enter Second Array");
        for(int i=0;i<n;i++)
        {
            b[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++)
        {
            c[i]=a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            if(b[i]!=a[j])
            {
                c[m+i]=b[i];
                check++;
            }
        }
        System.out.println("New Array is:");
        for(int i=0;i<m+check;i++)
        {
            System.out.println(c[i]);
        }
        
}
}
