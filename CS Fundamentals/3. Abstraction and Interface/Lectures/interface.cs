using System;

interface IPayment{
  public void ValidatePayment();
  public void PaymentProcess();
  public void PaymentDetails();
}

class CreditCardPayment : IPayment{
  public void ValidatePayment(){
    Console.WriteLine("Credit Card Payment Validated");
  }
  public void PaymentProcess(){
    Console.WriteLine("Credit Card Payment Processed");
  }

  public void PaymentDetails(){
    Console.WriteLine("Credit Card Payment Details");
  }
}

class BkashPayment : IPayment{
  public void ValidatePayment(){
    Console.WriteLine("Bkash Payment Validated");
  }
  public void PaymentProcess(){
    Console.WriteLine("Bkash Payment Processed");
  }
  public void PaymentDetails(){
    Console.WriteLine("Bkash Payment Details");
  }
}

class Program {
  public static void Main (string[] args) {
    IPayment credidtCardPayment = new CreditCardPayment();

    credidtCardPayment.ValidatePayment();
    credidtCardPayment.PaymentProcess();
    credidtCardPayment.PaymentDetails();
    Console.WriteLine();


    IPayment bkashPayment = new BkashPayment();
    bkashPayment.ValidatePayment();
    bkashPayment.PaymentProcess();
    bkashPayment.PaymentDetails();
  }
}