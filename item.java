import java.utll.*;
class Main
{
    public static void main(String args[])
    {
    ArrayList mylist= new ArrayList();
    mylist.add("C");
    mylist.add("H");
    
    ArrayList mylist2= new ArrayList();
    mylist2.add("C");
    mylist2.add(1,"H");
    
    System.out.println(mylist.equals(mylist2));
}
}