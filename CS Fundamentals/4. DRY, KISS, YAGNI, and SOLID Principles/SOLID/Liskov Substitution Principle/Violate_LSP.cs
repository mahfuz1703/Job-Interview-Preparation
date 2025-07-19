public class Bird
{
    public virtual void Fly()
    {
        Console.WriteLine("Bird is flying");
    }
}

public class Sparrow : Bird
{
    public override void Fly()
    {
        Console.WriteLine("Sparrow is flying");
    }
}

public class Penguin : Bird
{
    public override void Fly()
    {
        throw new NotImplementedException("Penguins can't fly!");
    }
}

public class BirdProcessor
{
    public void MakeBirdFly(Bird bird)
    {
        bird.Fly();  // Will throw exception if it's a Penguin
    }
}

class Program
{
    static void Main()
    {
        BirdProcessor processor = new BirdProcessor();

        Bird sparrow = new Sparrow();
        processor.MakeBirdFly(sparrow);  // Works fine

        Bird penguin = new Penguin();
        processor.MakeBirdFly(penguin);  // Runtime error!
    }
}
