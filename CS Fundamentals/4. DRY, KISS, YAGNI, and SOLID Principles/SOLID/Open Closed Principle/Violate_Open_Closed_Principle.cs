/*
    Imagine you have a class called PaymentProcessor that handles payments for your e-commerce application. Initially, it only supports credit card payments:
*/

class PaymentProcessor {
    public void ProcessCreditCardPayment() {
        Console.WriteLine("Processing credit card payment...");
    }
}

/*
    Later on, you decide to extend your application to support PayPal payments. To do this, you have to modify the existing PaymentProcessor class:
*/

class PaymentProcessor
{
    public void ProcessCreditCardPayment()
    {
        Console.WriteLine("Processing credit card payment...");
    }

    public void ProcessPayPalPayment()
    {
        Console.WriteLine("Processing PayPal payment...");
    }
}

/*
    In this “before” example, you violated the Open/Closed Principle because you had to modify the existing class to add support for a new payment method. This can introduce bugs and affect the stability of your existing codebase.
*/

