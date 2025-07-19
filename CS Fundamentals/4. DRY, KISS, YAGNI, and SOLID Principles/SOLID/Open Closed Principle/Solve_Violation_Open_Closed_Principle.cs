interface IPaymentProcessor
{
    void ProcessPayment();
}

class CreditCardPayment : IPaymentProcessor
{
    public void ProcessPayment()
    {
        Console.WriteLine("Processing credit card payment...");
    }
}

class PayPalPayment : IPaymentProcessor
{
    public void ProcessPayment()
    {
        Console.WriteLine("Processing PayPal payment...");
    }
}

class PaymentContext
{
    private IPaymentProcessor _paymentProcessor;

    public PaymentContext(IPaymentProcessor paymentProcessor)
    {
        _paymentProcessor = paymentProcessor;
    }

    public void Process()
    {
        _paymentProcessor.ProcessPayment();
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