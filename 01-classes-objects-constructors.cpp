#include <iostream>
#include <vector>

using namespace std;

class YouTubeChannel{
    public:

        string name;
        string ownerName;
        int subscribersCount;
        vector<string> publishedVideoTitles;

        YouTubeChannel(string name, string ownerName){
            this->name = name;
            this->ownerName = ownerName;
            this->subscribersCount = 0;
        }

        void getInfo(){
            cout << this->name << "\n";
            cout << this->ownerName << "\n";
            cout << this->subscribersCount << "\n";
            for(string videoTitle: this->publishedVideoTitles){
                cout << videoTitle << "\n";
            }
        }
};

int main(){
    YouTubeChannel ytChannel1("YtChannel1", "Name1");
    ytChannel1.publishedVideoTitles.push_back("Video1");
    ytChannel1.publishedVideoTitles.push_back("Video2");
    ytChannel1.publishedVideoTitles.push_back("Video3");
    ytChannel1.getInfo();

    YouTubeChannel ytChannel2("YtChannel2", "Name2");
    ytChannel2.publishedVideoTitles.push_back("Video2");
    ytChannel2.publishedVideoTitles.push_back("Video3");
    ytChannel2.getInfo();

    return 0;
}

/*

Some short notes
----------------

- The constructor needs to be present in the public section of the code
- In the public section of the code, the position of the variables and the constructor doesn't matter. That is, a constructor can be defined in the beginning and the variables can be defined after the constructor.


*/