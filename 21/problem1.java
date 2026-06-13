import java.util.*;

class DigitX
{
    public int ProductDigit(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            iMult = iMult * iDigit;
            iNo = iNo/10;
        }
        return iMult;
    }
}
class problem1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        iRet = dobj.ProductDigit(iValue);
        System.out.println("Product of Digits is : "+iRet);

    }
}