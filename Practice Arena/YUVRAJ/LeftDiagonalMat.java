
import java.util.Scanner;


public class LeftDiagonalMat {
    public static void main(String[] args) {
        int[][] a=new int[5][5];
        int i,j,m,n,sum=0;
        Scanner s=new Scanner(System.in); 
        System.out.println("Enter size of Matrix(Row x col)");
        m=s.nextInt();
        n=s.nextInt();
        System.out.println("Enter Elements of Array");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                a[i][j]=s.nextInt();
            }
        }
        int x=0,y=0;
        for(i=0;i<m;i++){
                    sum=sum+a[x][y];
               x++;
               y++;
        }
        System.out.println("Sum of left Diagonal is :"+ sum);
    }
}
