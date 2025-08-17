using System;
using System.Collections.Generic;

class HttpRequest{
    public string Method;
    public string Uri;
    public IDictionary<string, string> Headers = new Dictionary<string, string>();
    public string Body;

    public void Send(){
        Console.WriteLine("Request sent ...");
        Console.WriteLine("Method: " + Method);
        Console.WriteLine("Uri: " + Uri);
        foreach (var header in Headers){
            Console.WriteLine("Header: " + header.Key + " = " + header.Value);
        }
        Console.WriteLine("Body: " + Body);
    }
}

class HttpRequestBuilder{
    private HttpRequest request = new HttpRequest();

    public HttpRequestBuilder SetMethod(string method){
        request.Method = method;
        return this;
    }

    public HttpRequestBuilder SetUri(string uri){
        request.Uri = uri;
        return this;
    }

    public HttpRequestBuilder SetHeader(string key, string value){
        request.Headers.Add(key, value);
        return this;
    }

    public HttpRequestBuilder SetBody(string body){
        request.Body = body;
        return this;
    }

    public HttpRequest Build(){
        return request;
    }
}

class Program
{
    public static void Main(string[] args)
    {
        HttpRequest request = new HttpRequestBuilder()
            .SetMethod("POST")
            .SetUri("http://example.com")
            .SetHeader("Content-Type", "application/json")
            .SetBody("{\"name\":\"John Doe\"}")
            .Build();

        request.Send();
    }
}