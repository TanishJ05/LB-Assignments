import java.util.*;

class DigitX
{
    public void SumEven(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 2 ; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Sum is : "+iCnt);
        
    }
}
class problem1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        dobj.SumEven(iValue);

    }
}