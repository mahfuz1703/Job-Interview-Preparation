class Program
{
    static void Main(string[] args)
    {
        int a = 5;
        int b = 10;
        int x = 10;
        int y = 20;
        int sum1 = a + b; // Violation of DRY
        int sum2 = x + y; // Violation of DRY
        Console.WriteLine($"Sum of {a} and {b} is: {sum1}");
        Console.WriteLine($"Sum of {x} and {y} is: {sum2}");
    }
}

/*In this example, the addition operation is repeated for two different pairs of integers. This violates the DRY (Don't Repeat Yourself) principle, as the same logic is duplicated. To adhere to the DRY principle, we should encapsulate the addition logic in a method that can be reused, as shown in the DRY example. By doing so, we can avoid code duplication and make our code more maintainable.*/