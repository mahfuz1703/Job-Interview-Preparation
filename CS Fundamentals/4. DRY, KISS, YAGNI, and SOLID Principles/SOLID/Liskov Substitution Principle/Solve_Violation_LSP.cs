public abstract class Bird
{
    public abstract void Eat();
}

public interface IFlyable
{
    void Fly();
}

public class Sparrow : Bird, IFlyable
{
    public override void Eat()
    {
        Console.WriteLine("Sparrow is eating");
    }

    public void Fly()
    {
        Console.WriteLine("Sparrow is flying");
    }
}

public class Penguin : Bird
{
    public override void Eat()
    {
        Console.WriteLine("Penguin is eating");
    }

    // No Fly method — it doesn't implement IFlyable
}

class Program
{
    static void Main()
    {
        Bird sparrow = new Sparrow();
        sparrow.Eat();

        IFlyable flyingSparrow = new Sparrow();
        flyingSparrow.Fly();

        Bird penguin = new Penguin();
        penguin.Eat(); // Works fine, no broken logic
    }
}
