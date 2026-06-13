import java.util.*;

class DigitX
{
    public void SumEven(int iNo)
    {
        int iCnt = 0;
        for(iCnt = iNo ; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }        
    }
}
class problem2
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