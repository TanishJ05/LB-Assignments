import java.util.*;

class DigitX
{
    public void OddNum(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1 ; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(+iCnt);
            }
        }
        
    }
}
class problem3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        dobj.OddNum(iValue);

    }
}