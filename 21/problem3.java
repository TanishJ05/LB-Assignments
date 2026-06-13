import java.util.*;
class DigitX
{
    public static void DisplayFactors(int iNo)
    {
        int iCnt = 0;
        for( iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.print(iCnt + " \n");
            }
        }
    }
}


class problem3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        DigitX.DisplayFactors(iValue);
    }
}