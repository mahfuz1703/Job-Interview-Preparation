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
}

public class Report
{
    public void GenerateReport()
    {
        Console.WriteLine("Generating invoice report...");
    }
}

public class EmailService
{
    public void Email()
    {
        Console.WriteLine("Emailing invoice...");
    }
}

// Now, each class has a single responsibility, adhering to the Single Responsibility Principle.