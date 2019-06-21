public class CurSum {
    int[] a={3,4,5,2,6,1};
     int cursum=a[0],start=0,end=0; 
        int sum=7;
        void sum(){
            for(int i=1;i<a.length;i++)
        {
            while(cursum>sum)
            {
                      cursum-=a[start];
                        start++;   

            }
            if(cursum==sum)
            {print(start,end);
                
            }
            if(cursum<sum){
                    cursum+=a[i];
                    end++;
                }
                    
        }
        }
    void print(int x,int y){
        for(int i=x;i<=y;i++)
        {
            System.out.println(a[i]);
        }
    }
    public static void main(String[] args) {
       
        
    }
}
