static string GetMonthName(int number)
{
    string[] months = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    if (number < 1 || number > 12)
    {
        throw new InvalidOperationException("Invalid month number.");
    }
    return months[number - 1];
}

/*
    In this example, the GetMonthName method follows the KISS principle by providing a simple and straightforward solution. By avoiding unnecessary complexity and adhering to best practices, we can create code that is easier to understand and maintain.
*/