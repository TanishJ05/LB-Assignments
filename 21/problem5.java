import java.util.*;
class DigitX
{
    public static void DisplayDivisible(int iNo)
    {
        int iCnt = 0;
        for( iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2 == 0) && (iCnt % 3 == 0))

            {

                System.out.print(iCnt + " ");

            }
        }
    }
}


class problem5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        DigitX.DisplayDivisible(iValue);
    }
}