using System;

interface Player
{
    void play();
}

class CDPlayer : Player
{
    public void play()
    {
        Console.WriteLine("Playing audio from CD...");
    }
}

class MP3Player : Player
{
    public void play()
    {
        Console.WriteLine("Playing audio from MP3...");
    }
}

interface Media
{
    void load();
}

class CD : Media
{
    public void load()
    {
        Console.WriteLine("Loading CD...");
    }
}

class Album : Media
{
    public void load()
    {
        Console.WriteLine("Loading Album...");
    }
}

interface AbstractMusicFactory
{
    Player createPlayer();
    Media createMedia();
}

class AnalogMusicFactory : AbstractMusicFactory
{
    public Player createPlayer()
    {
        return new CDPlayer();
    }

    public Media createMedia()
    {
        return new CD();
    }
}

class DigitalMusicFactory : AbstractMusicFactory
{
    public Player createPlayer()
    {
        return new MP3Player();
    }

    public Media createMedia()
    {
        return new Album();
    }
}

class Program
{
    public static void Main(string[] args)
    {
        AbstractMusicFactory analogFactory = new AnalogMusicFactory();

        Player analogPlayer = analogFactory.createPlayer();
        Media analogMedia = analogFactory.createMedia();

        analogPlayer.play();
        analogMedia.load();

        AbstractMusicFactory digitalFactory = new DigitalMusicFactory();
        Player digitalPlayer = digitalFactory.createPlayer();
        Media digitalMedia = digitalFactory.createMedia();

        digitalPlayer.play();
        digitalMedia.load();
    }
}
