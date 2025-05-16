#include "iostream"
#include "vector"

using namespace std;

class Iplaylable{
    virtual void play() = 0;
};
class IDownloadable{
    virtual void download() = 0;
};
class IStreamable{
    virtual void stream() = 0;
};

class Game : public Iplaylable, public IDownloadable
{
    public:
        void play()
        {
            cout<<"Playing Game" << endl;
        }
        void download(){
            cout<<"Downloading Game" << endl;
        }
};

class Movie : public IStreamable, public IDownloadable
{
    public:
        void stream()
        {
            cout<<"Streaming Movie" << endl;
        }
        void download(){
            cout<<"Downloading Movie" << endl;
        }
};

int main()
{
    Game gameObj;
    gameObj.download();
    gameObj.play();

    Movie movObj;
    movObj.download();
    movObj.stream();

    return 0;
}