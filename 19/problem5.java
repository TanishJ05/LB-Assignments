class Logic
{
    void calculatePower(int iBase, int iExp)
    {
        int iRet = 1;

        for(int i = 1; i <= iExp; i++)
        {
            iRet = iRet * iBase;
        }

        System.out.println("Power = " + iRet);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}