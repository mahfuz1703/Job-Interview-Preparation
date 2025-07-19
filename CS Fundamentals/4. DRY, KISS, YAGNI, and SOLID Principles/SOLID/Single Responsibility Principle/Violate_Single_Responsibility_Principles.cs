public class Invoice
{
    public void AddInvoice()
    {
        Console.WriteLine("Adding invoice...");
    }

    public void DeleteInvoice()
    {
        Console.WriteLine("Deleting invoice...");
    }

    public void GenerateReport() // This method violates the Single Responsibility Principle
    {
        Console.WriteLine("Generating invoice report...");
    }

    public void Email() // This method also violates the Single Responsibility Principle
    {
        Console.WriteLine("Emailing invoice...");
    }
}