using System;

interface IPaymentProcess
{
    void ProcessPayment();
}

interface IPaymentSuccess
{
    void PaymentSuccess();
}

interface IPaymentFailure
{
    void PaymentFailure();
}

class CreditCardPayment : IPaymentProcess, IPaymentSuccess, IPaymentFailure
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

class PayPalPayment : IPaymentProcess, IPaymentSuccess
{
    public void ProcessPayment()
    {
        Console.WriteLine("Processing PayPal payment...");
    }

    public void PaymentSuccess()
    {
        Console.WriteLine("PayPal payment successful.");
    }
}

class PaymentContext
{
    private readonly IPaymentProcess _paymentProcess;
    private readonly IPaymentSuccess _paymentSuccess;
    private readonly IPaymentFailure _paymentFailure;

    public PaymentContext(IPaymentProcess paymentProcess, IPaymentSuccess paymentSuccess, IPaymentFailure paymentFailure)
    {
        _paymentProcess = paymentProcess;
        _paymentSuccess = paymentSuccess;
        _paymentFailure = paymentFailure;
    }

    public void Process()
    {
        _paymentProcess.ProcessPayment();
        _paymentSuccess.PaymentSuccess();

        if (_paymentFailure != null)
        {
            _paymentFailure.PaymentFailure();
        }
    }
}


class Program
{
    static void Main(string[] args)
    {
        // Using Credit Card Payment
        PaymentContext creditCardPayment = new PaymentContext(new CreditCardPayment(), new CreditCardPayment(), new CreditCardPayment());
        creditCardPayment.Process();

        // Using PayPal Payment
        PaymentContext payPalPayment = new PaymentContext(new PayPalPayment(), new PayPalPayment(), null);
        payPalPayment.Process();
    }
}