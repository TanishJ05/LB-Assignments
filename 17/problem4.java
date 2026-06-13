import java.util.*;

class NumberX
{
    public static void Min(int iNo1,int iNo2,int iNo3)
    {
        if(iNo1 == iNo2 && iNo2 == iNo3)
        {
            System.out.println("Numbers are equal ");
        }
        else if(iNo1 < iNo2 && iNo1 < iNo3)
        {
            System.out.println("Minimum number is : "+iNo1);
        }
        else if(iNo2 < iNo1 && iNo2 < iNo3)
        {
            System.out.println("Minimum number is : "+iNo2);
        }
        else
        {
            System.out.println("Minimum number is : "+iNo3);
        }

    }
}

class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iValue1 = 0, iValue2 = 0, iValue3 = 0;

        System.out.println("enter the first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("enter the second number : ");
        iValue2 = sobj.nextInt();  

        System.out.println("enter the third number : ");
        iValue3 = sobj.nextInt();       

        NumberX.Min(iValue1,iValue2,iValue3);
    }
}