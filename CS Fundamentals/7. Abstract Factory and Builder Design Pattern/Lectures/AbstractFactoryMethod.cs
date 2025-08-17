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


interface INotificationFactory
{
    public ISend CreateSend();
    public ILog CreateLog();
    public ISave CreateSave();
}


class EmailNotifyFactory : INotificationFactory
{
    private string email;
    public EmailNotifyFactory(string email)
    {
        this.email = email;
    }
    public ISend CreateSend()
    {
        return new EmailNotify { email = this.email };
    }

    public ILog CreateLog()
    {
        return new EmailNotify { email = this.email };
    }

    public ISave CreateSave()
    {
        return new EmailNotify { email = this.email };
    }
}

class SMSNotifyFactory : INotificationFactory
{
    private string phone;
    public SMSNotifyFactory(string phone)
    {
        this.phone = phone;
    }
    public ISend CreateSend()
    {
        return new SMSNotify { phone = this.phone };
    }

    public ILog CreateLog()
    {
        return new SMSNotify { phone = this.phone };
    }

    public ISave CreateSave()
    {
        return new SMSNotify { phone = this.phone };
    }
}


class PushNotifyFactory : INotificationFactory
{
    private string token;
    public PushNotifyFactory(string token)
    {
        this.token = token;
    }
    public ISend CreateSend()
    {
        return new PushNotify { token = this.token };
    }

    public ILog CreateLog()
    {
        return new PushNotify { token = this.token };
    }

    public ISave CreateSave()
    {
        return null;
    }
}

interface INotifyContextFactory
{
    public NotifyContext Create();
}

class EmailNotifyContextFactory : INotifyContextFactory
{
    private string email;
    public EmailNotifyContextFactory(string email)
    {
        this.email = email;
    }
    public NotifyContext Create()
    {
        INotificationFactory factory = new EmailNotifyFactory(email);
        return new NotifyContext(
            factory.CreateSend(),
            factory.CreateLog(),
            factory.CreateSave()
        );
    }
}

class SMSNotifyContextFactory : INotifyContextFactory
{
    private string phone;
    public SMSNotifyContextFactory(string phone)
    {
        this.phone = phone;
    }
    public NotifyContext Create()
    {
        INotificationFactory factory = new SMSNotifyFactory(phone);
        return new NotifyContext(
            factory.CreateSend(),
            factory.CreateLog(),
            factory.CreateSave()
        );
    }
}

class PushNotifyContextFactory : INotifyContextFactory
{
    private string token;
    public PushNotifyContextFactory(string token)
    {
        this.token = token;
    }
    public NotifyContext Create()
    {
        INotificationFactory factory = new PushNotifyFactory(token);
        return new NotifyContext(
            factory.CreateSend(),
            factory.CreateLog(),
            factory.CreateSave()
        );
    }
}

class Program
{
    public static void Main(string[] args)
    {
        INotifyContextFactory emailCreator = new EmailNotifyContextFactory("email@example.com");
        INotifyContextFactory smsCreator = new SMSNotifyContextFactory("123-456-7890");
        INotifyContextFactory pushCreator = new PushNotifyContextFactory("push_token_123");

        NotifyContext emailContext = emailCreator.Create();
        NotifyContext smsContext = smsCreator.Create();
        NotifyContext pushContext = pushCreator.Create();

        emailContext.execute();
        smsContext.execute();
        pushContext.execute();
    }
}