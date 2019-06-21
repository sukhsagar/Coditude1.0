
import java.util.Scanner;


public class ShiftArray {
    public static void main(String[] args) {
        int[] a=new int[20];
        int size,i;
        int start,end;
        int check,temp;
        Scanner cs=new Scanner(System.in);
        System.out.println("Enter the size of Array");
        size=cs.nextInt();
        System.out.println("enter elements of Array");
        for(i=0;i<size;i++)
        {
            a[i]=cs.nextInt();
        }
        check=size/2;
        if(size%2==0){   
            start=0;
            end=check;
        }
        else{
            start=0;
            end=check+1;
        }
        for(i=0;i<=check;i++)
        {
            if(start!=check){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end++;
            }
        }
        for(i=0;i<size;i++){
            System.out.println(a[i]);
        }
    }
}
