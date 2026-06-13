import java.util.*;
class Logic
{
    public static void CheckSign(int iNo)
    {
        if(iNo > 0)
        {
            System.out.println("Number is positive ");
        }
        else if(iNo < 0)
        {
            System.out.println("Number is negative ");
        }
        else 
        {
            System.out.println("Number is zero ");
        }
    }
}
class problem5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic.CheckSign(iValue);
    }
}
