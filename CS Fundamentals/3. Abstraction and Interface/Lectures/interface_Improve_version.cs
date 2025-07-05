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

class Program {
  public static void Main (string[] args) {
    // INotify emailNotify = new EmailNotify{
    //   email = "example@example.com"
    // };
    // emailNotify.Send();
    // emailNotify.Log();
    // emailNotify.Save();
    // Console.WriteLine();

    // INotify smsNotify = new SMSNotify{
    //   phone = "1234567890"
    // };
    // smsNotify.Send();
    // smsNotify.Log();
    // smsNotify.Save();


    // Improving the code using List and foreach loop to avoid code repetition and make it more dynamic and scalable for future use cases.
    IList<INotify> notifies = new List<INotify>{
      new EmailNotify{ email = "example@example.com" },
      new SMSNotify{ phone = "1234567890" }
    };

    foreach(INotify notify in notifies){
      notify.Send();
      notify.Log();
      notify.Save();
      Console.WriteLine();  
    }
  }
}