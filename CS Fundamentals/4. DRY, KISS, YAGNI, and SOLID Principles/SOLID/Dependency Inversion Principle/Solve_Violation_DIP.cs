public interface ISwitchable
{
    void TurnOn();
    void TurnOff();
}

public class Bulb : ISwitchable
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

public class Fan : ISwitchable
{
    public void TurnOn()
    {
        Console.WriteLine("Fan is running");
    }

    public void TurnOff()
    {
        Console.WriteLine("Fan is stopped");
    }
}

public class Switch
{
    private ISwitchable _device;

    public Switch(ISwitchable device)
    {
        _device = device;
    }

    public void Operate(bool on)
    {
        if (on)
            _device.TurnOn();
        else
            _device.TurnOff();
    }
}

class Program
{
    static void Main()
    {
        ISwitchable bulb = new Bulb();
        Switch bulbSwitch = new Switch(bulb);
        bulbSwitch.Operate(true);
        bulbSwitch.Operate(false);

        ISwitchable fan = new Fan();
        Switch fanSwitch = new Switch(fan);
        fanSwitch.Operate(true);
        fanSwitch.Operate(false);
    }
}
