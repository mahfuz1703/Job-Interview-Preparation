using System;
using System.Threading;

class Logger{
    private Logger(){
        Console.WriteLine("Logger created");
    }

    private static Logger _instance = null;
    private static readonly object _lock = new object();

    public static Logger GetInstance(){
        if(_instance == null){
            lock(_lock){
                if(_instance == null){
                    _instance = new Logger();
                }
            }
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
        Thread thread1 = new Thread(() =>
        {
            Logger logger1 = Logger.GetInstance();
        });

        Thread thread2 = new Thread(() =>
        {
            Logger logger2 = Logger.GetInstance();
        });

        thread1.Start();
        thread2.Start();

        thread1.Join();
        thread2.Join();
    }
}

// This implementation uses a lock to ensure that only one thread can create the instance of Logger at a time.
// This makes the Singleton pattern thread-safe, preventing multiple threads from creating multiple instances
// of the Logger class simultaneously.
// This is a thread-safe implementation of the Singleton pattern.