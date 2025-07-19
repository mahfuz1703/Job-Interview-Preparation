using System;

public class Bulb
{
    public void TurnOn()
    {
        Console.WriteLine("Bulb is turned ON");
    }

    public void TurnOff()
    {
        Console.WriteLine("Bulb is turned OFF");
    }
}

public class Switch
{
    private Bulb bulb;

    public Switch()
    {
        bulb = new Bulb(); // tightly coupled
    }

    public void Operate(bool on)
    {
        if (on)
            bulb.TurnOn();
        else
            bulb.TurnOff();
    }
}

class Program
{
    static void Main()
    {
        Switch sw = new Switch();
        sw.Operate(true);
        sw.Operate(false);
    }
}
