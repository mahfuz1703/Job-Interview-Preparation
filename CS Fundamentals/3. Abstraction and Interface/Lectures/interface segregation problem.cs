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
  public void Save(){} // Arises interface segregation problem that means we not maintain SOLID principles. In this case we break I of SOLID. Solve this problem by multiple inheritance of interface. 
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

class Program {
  public static void Main (string[] args) {
    IList<NotifyFactory> notifies = new List<NotifyFactory>{
      new NotifyFactory(new EmailNotify{email = "email@email.com"}),
      new NotifyFactory(new SMSNotify{phone = "123456789"}),
      new NotifyFactory(new PushNotify{token = "1234ABCD"})
    };

    foreach(var notify in notifies){
      notify.execute();
      Console.WriteLine();
    }
  }
}