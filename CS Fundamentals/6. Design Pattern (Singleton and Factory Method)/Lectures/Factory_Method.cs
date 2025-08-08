using System;

interface ISend
{
    public void Send();
}
interface ILog
{
    public void Log();
}
interface ISave
{
    public void Save();
}

class EmailNotify : ISend, ILog, ISave
{
    public string email { get; set; }

    public void Send()
    {
        Console.WriteLine("Email sent to " + email);
    }
    public void Log()
    {
        Console.WriteLine("Email logging to " + email);
    }
    public void Save()
    {
        Console.WriteLine("Email saved to " + email);
    }
}

class SMSNotify : ISend, ILog, ISave
{
    public string phone { get; set; }

    public void Send()
    {
        Console.WriteLine("SMS sent to " + phone);
    }
    public void Log()
    {
        Console.WriteLine("SMS logging to " + phone);
    }
    public void Save()
    {
        Console.WriteLine("SMS saved to " + phone);
    }
}

class PushNotify : ISend, ILog
{
    public string token { get; set; }

    public void Send()
    {
        Console.WriteLine("Push sent to " + token);
    }
    public void Log()
    {
        Console.WriteLine("Push logging to " + token);
    }
}

class NotifyContext
{
    public ISend send { get; set; }
    public ILog log { get; set; }
    public ISave save { get; set; }

    public NotifyContext(ISend send, ILog log, ISave save)
    {
        this.send = send;
        this.log = log;
        this.save = save;
    }

    public void execute()
    {
        send.Send();
        log.Log();

        if (save != null)
        {
            save.Save();
        }
    }
}


// Factory Method pattern for NotifyContext creation (with strategy design pattern)
interface INotifyContextFactory
{
    public NotifyContext Create();
}

class EmailNotifyContextFactory : INotifyContextFactory
{
    public NotifyContext Create()
    {
        return new NotifyContext(
            new EmailNotify { email = "example@email.com" },
            new EmailNotify { email = "example@email.com" },
            new EmailNotify { email = "example@email.com" }
        );
    }
}

class SMSNotifyContextFactory : INotifyContextFactory
{
    public NotifyContext Create()
    {
        return new NotifyContext(
            new SMSNotify { phone = "123456789" },
            new SMSNotify { phone = "123456789" },
            new SMSNotify { phone = "123456789" }
        );
    }
}

class PushNotifyContextFactory : INotifyContextFactory
{
    public NotifyContext Create()
    {
        return new NotifyContext(
            new PushNotify { token = "123456789" },
            new PushNotify { token = "123456789" },
            null
        );
    }
}

class Program
{
    public static void Main(string[] args)
    {
        INotifyContextFactory emailCreator = new EmailNotifyContextFactory();
        INotifyContextFactory smsCreator = new SMSNotifyContextFactory();
        INotifyContextFactory pushCreator = new PushNotifyContextFactory();

        NotifyContext emailContext = emailCreator.Create();
        NotifyContext smsContext = smsCreator.Create();
        NotifyContext pushContext = pushCreator.Create();

        emailContext.execute();
        smsContext.execute();
        pushContext.execute();

    }
}

// This code demonstrates the Factory Method pattern combined with the Strategy design pattern.
// The NotifyContext class uses different strategies for sending, logging, and saving notifications.
// The INotifyContextFactory interface defines a method for creating NotifyContext instances.
// Each concrete factory (EmailNotifyContextFactory, SMSNotifyContextFactory, PushNotifyContextFactory) implements this interface to create specific NotifyContext instances with the appropriate strategies.
// This allows for flexibility and extensibility in creating different notification contexts without modifying the NotifyContext class itself.
// The main program creates instances of each factory and uses them to create NotifyContext instances.