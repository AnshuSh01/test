import java.util.*;
class array2d {

  
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.println("ENter how many rows and column are there");
        int n=sc.nextInt();
        int m=sc.nextInt();
        int arr[][]=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=sc.nextInt();
            }
        }

        System.out.println("Enter number u want to search");
        int x=sc.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
           if(arr[i][j]==x){
               System.out.print(x+"found at indices"+"("+i+" "+j+")");

           }
            
            }
        }
        
        
       

    }

        
    }
    

