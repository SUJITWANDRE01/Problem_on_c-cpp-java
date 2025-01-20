import java.util.*;

class Calculations
{
    public float CalculatePercentage(int A, int B)
    {
        float fResult = 0.0f;
        fResult = ((float)A / (float)B) * 100;
        return fResult;
    }
}

class program233
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        float fAns = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter obtained marks : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter total marks : ");
        iNo2 = sobj.nextInt();

        Calculations cobj = new Calculations();
        fAns = cobj.CalculatePercentage(iNo1, iNo2);

        System.out.println("Percentage is : "+fAns); 
    }
}
