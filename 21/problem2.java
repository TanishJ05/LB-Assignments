import java.util.*;
class DigitX
{
    public static void CountEvenOddRange(int n)
    {
        int iEvenCount = 0;
        int iOddCount = 0;

        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                iEvenCount++;
            }
            else
            {
                iOddCount++;
            }
        }

        System.out.println("Even count : " + iEvenCount);
        System.out.println("Odd count  : " + iOddCount);
    }
}

class problem2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        DigitX.CountEvenOddRange(iValue);
    }
}