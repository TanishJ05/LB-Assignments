import java.util.*;

class DigitX
{
    public int LargestDigit(int iNo)
    {
        int iDigit = 0;
        int iLargest = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            if(iDigit > iLargest)
            {
                iLargest = iDigit;
            }
            iNo = iNo/10;
        }
        return iLargest;
    }
}
class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        iRet = dobj.LargestDigit(iValue);
        System.out.println("Largest digit is : "+iRet);

    }
}