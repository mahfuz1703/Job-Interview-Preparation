using System;

public class Author
{
    private string _firstName, _lastName;
    private Guid _id = Guid.NewGuid();
    private DateTime _created = DateTime.Now;

    public Author(string firstName, string lastName)
    {
        _firstName = firstName;
        _lastName = lastName;
    }

    public string GetFullName() => $"Author: {_firstName} {_lastName}";

    public void Save() => Console.WriteLine("Saving to DB..."); // Not needed

    public void PrintInfo()
    {
        Console.WriteLine($"ID: {_id} | Created: {_created} | Name: {GetFullName()}");
    }
}

class Program
{
    static void Main()
    {
        var author = new Author("John", "Doe");
        author.Save();       // Unused in real logic
        author.PrintInfo();  // Overkill for simple name
    }
}

/*
    Problems:
        - Unused Save method
        - Overkill for simple name retrieval
        - Unnecessary complexity for a simple task
        - Violates YAQNI (You Aren't Gonna Need It) principle by adding features that aren't needed yet
*/
