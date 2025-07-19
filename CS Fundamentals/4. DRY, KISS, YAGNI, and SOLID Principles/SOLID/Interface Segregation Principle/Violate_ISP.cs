using System;

interface IPayment
{
    void ProcessPayment();
    void PaymentSuccess();
    void PaymentFailure();
}

class CreditCardPayment : IPayment
{
    public void ProcessPayment()
    {
        Console.WriteLine("Processing credit card payment...");
    }

    public void PaymentSuccess()
    {
        Console.WriteLine("Credit card payment successful.");
    }

    public void PaymentFailure()
    {
        Console.WriteLine("Credit card payment failed.");
    }
}

class PayPalPayment : IPayment
{
    public void ProcessPayment()
    {
        Console.WriteLine("Processing PayPal payment...");
    }

    public void PaymentSuccess()
    {
        Console.WriteLine("PayPal payment successful.");
    }

    public void PaymentFailure(){} // Here violates the Interface Segregation Principle, as it does not need to implement this method.
}

class PaymentContext
{
    private readonly IPayment _payment;

    public PaymentContext(IPayment payment)
    {
        _payment = payment;
    }

    public void Process()
    {
        _payment.ProcessPayment();
        _payment.PaymentSuccess();
        _payment.PaymentFailure();
    }
}


class Program
{
    static void Main(string[] args)
    {
        // Using Credit Card Payment
        PaymentContext creditCardPayment = new PaymentContext(new CreditCardPayment());
        creditCardPayment.Process();

        // Using PayPal Payment
        PaymentContext payPalPayment = new PaymentContext(new PayPalPayment());
        payPalPayment.Process();
    }
}