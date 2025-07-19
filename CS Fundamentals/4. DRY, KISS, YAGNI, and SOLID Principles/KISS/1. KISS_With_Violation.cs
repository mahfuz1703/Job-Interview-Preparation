public class MonthHelper
{
    private static Dictionary<int, string> monthDict = new Dictionary<int, string>
    {
        {1,"January"},{2,"February"},{3,"March"},{4,"April"},
        {5,"May"},{6,"June"},{7,"July"},{8,"August"},
        {9,"September"},{10,"October"},{11,"November"},{12,"December"}
    };

    public static string GetMonth(int number)
    {
        if (monthDict.ContainsKey(number))
        {
            foreach (var item in monthDict)
            {
                if (item.Key == number)
                    return item.Value;
            }
        }
        throw new Exception("Invalid month.");
    }
}

/*
    Problems:
        -Using a dictionary, then looping through it (redundant)
        -Adds a class when a simple method was enough
        -More lines, less clarity
*/