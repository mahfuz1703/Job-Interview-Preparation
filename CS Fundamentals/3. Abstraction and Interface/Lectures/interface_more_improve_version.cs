using System;
using System.Collections.Generic;

interface INotify{
  public void Send();
  public void Log();
  public void Save();
}

class EmailNotify : INotify{
  public string email {get; set;}

  public void Send(){
    Console.WriteLine("Email sent to " + email);
  }
  public void Log(){
    Console.WriteLine("Email logging to " + email);
  }
  public void Save(){
    Console.WriteLine("Email saved to " + email);
  }
}

class SMSNotify : INotify{
  public string phone {get; set;}

  public void Send(){
    Console.WriteLine("SMS sent to " + phone);
  }
  public void Log(){
    Console.WriteLine("SMS logging to " + phone);
  }
  public void Save(){
    Console.WriteLine("SMS saved to " + phone);
  }
}

class PushNotify : INotify{
  public string token {get; set;}

  public void Send(){
    Console.WriteLine("Push sent to " + token);
  }
  public void Log(){
    Console.WriteLine("Push logging to " + token);
  }
  public void Save(){
    Console.WriteLine("Push saved to " + token);
  }
}

class NotifyFactory{
  public INotify notify {get; set;}
  public NotifyFactory(INotify notify){
    this.notify = notify;
  }

  public void execute(){
    notify.Send();
    notify.Log();
    notify.Save();
  }
}

class Program
{
    public static void Main(string[] args)
    {
        IList<NotifyFactory> notifies = new List<NotifyFactory>{
      new NotifyFactory(new EmailNotify{email = "email@email.com"}),
      new NotifyFactory(new SMSNotify{phone = "123456789"}),
      new NotifyFactory(new PushNotify{token = "1234ABCD"})
    };

        foreach (var notify in notifies)
        {
            notify.execute();
            Console.WriteLine();
        }
    }
}

// Strategy Design Pattern: Implement new notification (PushNotify) without changing existing code.
// This allows for easy extension of the notification system without modifying existing classes.
// This is a good example of the Open/Closed Principle, which states that software entities should be open for extension but closed for modification.
// The NotifyFactory class acts as a wrapper to execute the notification methods, allowing for a clean and scalable design.
