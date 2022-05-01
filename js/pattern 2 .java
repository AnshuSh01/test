
class pattern{

    public static void main(String[] args) {

      

        System.out.print("Enter how much row u want");
       
        for (int i=1;i<=4;i++)
        {
          for (int j=1;j<=4;j++)
          {
              if(i==1 || j==1 || i==4 || j==4)
              {
                  System.out.print("*");

              }
              else{
                  System.out.print(" ");
              }
              
          }
          System.out.println();
        }
           
        }
    }


        
    
    

    
    
