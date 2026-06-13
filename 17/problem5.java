import java.util.*;

class DigitX
{
    public void Table(int iNo)
    {
        int iCnt = 0,iMult = 0;
        for(iCnt = 1 ; iCnt <= 10; iCnt++)
        {
            iMult = iNo * iCnt;
            System.out.println(iNo+ "x" +iCnt +"=" +iMult);
        }
        
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

        dobj.Table(iValue);

    }
}