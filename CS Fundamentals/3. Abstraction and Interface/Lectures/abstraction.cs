using System;

// Abstraction is a fundamental concept in object-oriented programming that allows you to define the essential characteristics of an object while hiding the complex implementation details.
// It helps in reducing complexity and increasing efficiency by allowing the programmer to focus on the high-level operations rather than the low-level details.

// Abstract class cannot be instantiated, it can only be inherited
// It can contain abstract methods (without body) and concrete methods (with body)
// Abstract methods must be implemented in derived classes
// Concrete methods can be used as is or overridden in derived classes
// Abstract class can have properties, fields, and methods

abstract class Payment
{

    public int Amount { get; set; }
    public int TransactionID { get; set; }

    public abstract void ValidatePayment();
    public abstract void PaymentProcess();

    public void PaymentDetails()
    {
        Console.WriteLine("Amount: {0}", Amount);
        Console.WriteLine("TransactionID: {0}", TransactionID);
    }
}

class CreditCardPayment : Payment{
  public string CardNumber {get; set;}

  public override void ValidatePayment(){
    Console.WriteLine("Credit Card Payment Validated");
  }
  public override void PaymentProcess(){
    Console.WriteLine("Credit Card Payment Processed");
  }
}

class BkashPayment : Payment{
  public string MobileNumber {get; set;}

  public override void ValidatePayment(){
    Console.WriteLine("Bkash Payment Validated");
  }
  public override void PaymentProcess(){
    Console.WriteLine("Bkash Payment Processed");
  }
}

class Program {
  public static void Main (string[] args) {
    Payment credidtCardPayment = new CreditCardPayment{
      Amount = 1000,
      TransactionID = 123456,
      CardNumber = "1234567890"
    };

    credidtCardPayment.ValidatePayment();
    credidtCardPayment.PaymentProcess();
    credidtCardPayment.PaymentDetails();
    Console.WriteLine();


    Payment bkashPayment = new BkashPayment{
      Amount = 500,
      TransactionID = 654321,
      MobileNumber = "01712345678"
    };
    bkashPayment.ValidatePayment();
    bkashPayment.PaymentProcess();
    bkashPayment.PaymentDetails();
  }
}