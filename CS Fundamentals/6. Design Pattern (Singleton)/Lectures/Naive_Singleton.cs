class Logger{
    private Logger(){
        Console.WriteLine("Logger created");
    }

    public static Logger _instance = null;

    public static Logger GetInstance(){
        if(_instance == null){
            _instance = new Logger();
        }
        return _instance;
    }

    public void Log(string message){
        Console.WriteLine(message);
    }
}

class Program
{
    static void Main(string[] args)
    {
        Logger logger = Logger.GetInstance();
        Logger logger2 = Logger.GetInstance();

        logger.Log("Hello World!");
        logger2.Log("Hello World 2!");

        if (logger == logger2)
        {
            Console.WriteLine("Same instance");
        }else
        {
            Console.WriteLine("Different instances");
        }
        // Output: Same instance
        // This shows that both logger and logger2 point to the same instance of Logger.
        // This is a naive implementation of the Singleton pattern.
        // In a real-world application, we would need to ensure that this implementation is thread-safe
        // to avoid issues in a multi-threaded environment.
    }
}

// Here we have a issue with the naive singleton implementation.
// If two threads call GetInstance at the same time, they could create two different instances.
// This is not thread-safe and can lead to unexpected behavior in a multi-threaded environment.
// To fix this, we can use locking or other synchronization mechanisms to ensure that only one thread
// can create the instance at a time.