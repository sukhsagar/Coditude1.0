
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class Seriesprime {
    static int checkprime(int n){
        int flag=0;
        if(n==2)
        {
           return 1; 
        }
        else{
            for(int i=2;i<=n/2;i++)
            {
                   if(n%i==0){
                       flag=1;
                       break;
                   }     
            }
            if(flag==0)
            {
                return 0;
            }
            else{
                return 1;
            }
        }
}
    public static void main(String[] args) {
        int n;
        int prime=2,check;
        float sum=0;
        Scanner cs=new Scanner(System.in);
        System.out.println("Enter the last term of series");
        n=cs.nextInt();
        for(int i=1;i<=n;i++){
            if(i%2!=0)
            {
                sum=sum+1;
            }
            else
            {
                while(true){
                check=checkprime(prime);
                if(check==1){
                    sum=sum+1/prime;
                    prime++;
                    break;
                }
                else{
                    prime++;
                }
                }
            }
        }
        System.out.println(sum);
        }
    }

