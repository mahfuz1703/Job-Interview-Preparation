using System;
using System.Collections.Generic;

interface ISend{
  public void Send();
}
interface ILog{
  public void Log();
}
interface ISave{
  public void Save();
}

class EmailNotify : ISend, ILog, ISave{
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

class SMSNotify : ISend, ILog, ISave{
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

class PushNotify : ISend, ILog{
  public string token {get; set;}

  public void Send(){
    Console.WriteLine("Push sent to " + token);
  }
  public void Log(){
    Console.WriteLine("Push logging to " + token);
  }
}

class NotifyFactory{
  public ISend send {get; set;}
  public ILog log {get; set;}
  public ISave save {get; set;}
  
  public NotifyFactory(ISend send, ILog log,  ISave save){
    this.send = send;
    this.log = log;
    this.save = save;
  }

  public void execute(){
    send.Send();
    log.Log();

    if(save != null){
      save.Save();
    }
  }
}

class Program {
  public static void Main (string[] args) {
    IList<NotifyFactory> notifies = new List<NotifyFactory>{
      new NotifyFactory(
        new EmailNotify{email = "abc@xyz.com"},
        new EmailNotify{email = "abc@xyz.com"},
        new EmailNotify{email = "abc@xyz.com"}
      ),
      new NotifyFactory(
        new SMSNotify{phone = "123456789"},
        new SMSNotify{phone = "123456789"},
        new SMSNotify{phone = "123456789"}
      ),
      new NotifyFactory(
        new PushNotify{token = "1234ABCD"},
        new PushNotify{token = "1234ABCD"},
        null
      )
    };

    foreach(var notify in notifies){
      notify.execute();
      Console.WriteLine();
    }
  }
}