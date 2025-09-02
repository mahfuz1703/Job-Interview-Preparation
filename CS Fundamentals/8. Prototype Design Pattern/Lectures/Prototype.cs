using System;
using System.Collections.Generic;

class Product{
    public string Id { get; set; }
    public string Name { get; set; }
    public decimal Price { get; set; }
    public string Category { get; set; }
    public string Description { get; set; }
    public string ImageUrl { get; set; }
    public bool IsAvailable { get; set; }
    public int Stock { get; set; }
    public string CreatedBy { get; set; }
    public string UpdatedBy { get; set; }
    public IList<string> Tags { get; set; }

    public Product clone(){
        return (Product)this.MemberwiseClone();
    }
    
}

interface IProductService{
    public Product copyProduct(Product product);
    public void ShowProduct(Product product);
}

class ProductService : IProductService{
    public Product copyProduct(Product product){
        Product productCopy = product.clone();
        productCopy.Id = Guid.NewGuid().ToString();
        return productCopy;
    }

    public void ShowProduct(Product product){
        Console.WriteLine($"Id: {product.Id}");
        Console.WriteLine($"Name: {product.Name}");
        Console.WriteLine($"Price: {product.Price}");
        Console.WriteLine($"Category: {product.Category}");
        Console.WriteLine($"Description: {product.Description}");
    }
}

class Program
{
    public static void Main(string[] args)
    {
        Product product = new Product();
        product.Id = "1";
        product.Name = "Product 1";
        product.Price = 100;
        product.Category = "Category 1";
        product.Description = "Description 1";
        product.ImageUrl = "ImageUrl 1";
        product.IsAvailable = true;
        product.Stock = 10;
        product.CreatedBy = "CreatedBy 1";
        product.UpdatedBy = "UpdatedBy 1";
        product.Tags = new List<string>(){"Tag 1", "Tag 2"};

        IProductService productService = new ProductService();
        Product productCopy = productService.copyProduct(product);

        Console.WriteLine("Original Product:");
        productService.ShowProduct(product);

        Console.WriteLine("\nCopied Product:");
        productCopy.Name = "Product 2";
        productService.ShowProduct(productCopy);
    }
}
