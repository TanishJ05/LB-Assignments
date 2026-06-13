import java.util.*;

class DigitX
{
    public int SmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iSmallest = 9;

        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            if(iDigit < iSmallest)
            {
                iSmallest = iDigit;
            }
            iNo = iNo/10;
        }
        return iSmallest;
    }
}
class problem5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        iRet = dobj.SmallestDigit(iValue);
        System.out.println("Smallest digit is : "+iRet);

    }
}