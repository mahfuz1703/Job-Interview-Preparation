class Author
{
    private string _firstName;
    private string _lastName;
    
    public Author(string firstName, string lastName)
    {
        _firstName = firstName;
        _lastName = lastName;
    }
  
    public string GetAuthorName()
    {
        return $"{_firstName} {_lastName}";
    }
}
class Program
{
    static void Main(string[] args)
    {
        Author author = new Author("John", "Doe");
        Console.WriteLine($"Author's name: {author.GetAuthorName()}");
    }
}

/*
    In this example, the Author class follows the YAGNI principle by implementing only the necessary attributes and methods. By avoiding unnecessary features, we can keep our codebase focused and efficient.
*/