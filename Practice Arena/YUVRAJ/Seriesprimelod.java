
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
    public static void main(String[] args) {
        int n;
        int prime=2;
        boolean flag=true;
        float sum=0,count=0;
        Scanner cs=new Scanner(System.in);
        System.out.println("Enter the last term of series");
        n=cs.nextInt();
        for(int i=1;i<n;i++){
            if(i%2!=0){
                sum+=1;
            }
            else{
                while(count<n/2){
                    for(int j=2;j<=n/2;j++){
                        if(prime%j==0){
                            flag=false;
                            break;
                           
                    }
                        }
                        if(flag==true){
                            sum+=1/prime;
                            count++;
                            prime++;
                        
                            break;
                           
                        }
                        else{
                            prime++;
                            count++;
                        }
                    }
                }
                
            }
        System.out.println(sum);
        }
    }

