using System;

interface ILogger{
    public void Log(string message, DateTime time);
}

class Logger : ILogger{
    private Logger(){
        Console.WriteLine("Logger created");
    }

    private static Logger _instance = null;
    private static readonly object _lock = new object();

    public static Logger getInstance(){
        if (_instance == null){
            lock (_lock){
                if (_instance == null){
                    _instance = new Logger();
                }
            }
        }
        return _instance;
    }

    public void Log(string message, DateTime time){
        Console.WriteLine("Logs for {0}, Time {1}", message, time);
    }
}

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
        ILogger logger = Logger.getInstance();
        logger.Log(email, DateTime.Now);
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
        ILogger logger = Logger.getInstance();
        logger.Log(phone, DateTime.Now);
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
        ILogger logger = Logger.getInstance();
        logger.Log(token, DateTime.Now);
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