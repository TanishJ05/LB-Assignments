import java.util.*;

class NumberX
{
    public static void Max(int iNo1,int iNo2)
    {
        if(iNo1 == iNo2)
        {
            System.out.println("Numbers are equal ");
        }
        else if(iNo1 > iNo2)
        {
            System.out.println("Maximum number is : "+iNo1);
        }
        else
        {
            System.out.println("Maximum number is : "+iNo2);
        }

    }
}

class problem3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iValue1 = 0, iValue2 = 0;

        System.out.println("enter the first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("enter the second number : ");
        iValue2 = sobj.nextInt();        

        NumberX.Max(iValue1,iValue2);
    }
}