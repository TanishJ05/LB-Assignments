import java.util.*;

class DigitX
{
    public void SumEvenOddDigit(int iNo)
    {
        int iDigit = 0,iEvenSum = 0,iOddSum = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            iNo = iNo/10;
        }
        
        System.out.println("Summation of Even Digits is : "+iEvenSum);
        System.out.println("Summation of Odd Digits is : "+iOddSum);

    }

}
class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        dobj.SumEvenOddDigit(iValue);
        
    }
    
}