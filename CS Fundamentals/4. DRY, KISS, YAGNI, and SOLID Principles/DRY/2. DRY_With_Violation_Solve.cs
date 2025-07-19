class Program
{
    static void Main(string[] args)
    {
        int a = 5;
        int b = 10;
        int x = 10;
        int y = 20;
        int sum1 = AddIntegers(a, b);
        int sum2 = AddIntegers(x, y);
        Console.WriteLine($"Sum of {a} and {b} is: {sum1}");
        Console.WriteLine($"Sum of {x} and {y} is: {sum2}");
    }

    static int AddIntegers(int num1, int num2)
    {
        return num1 + num2;
    }
}

/*
In this example, the AddIntegers method is reusable and eliminates the need to duplicate code for addition. By following the DRY principle, we can create cleaner, more maintainable codebases.
*/