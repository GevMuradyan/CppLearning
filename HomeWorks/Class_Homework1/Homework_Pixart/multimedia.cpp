#include <iostream>
#include <vector>
#include <string>

class Media{
protected:
int playCount = 0;
public:
    virtual void play()const = 0;
    virtual void info()const = 0;
    virtual ~Media() = default;

};

class Image:public Media{
private:
    std::string resolution;
public:
    Image(std::string res):resolution(res){}

    void play()const override{
        const_cast<Image*>(this)->playCount++;
        std::cout<<"Image is show: Play count"<<std::endl;
    }
    void info()const override{
        std::cout<<resolution<<std::endl;
    }

    void resize(std::string newsize){
        resolution = newsize;
    }

};

class Audio: public Media{
private:
    double duration;
public:

    Audio(double dur):duration(dur){}

    void trimAudio(){
        std::cout<<"Audio trimed"<<std::endl;
    }

    void info()const override{
        std::cout<<static_cast<int>(duration)<<std::endl;
    }
    void play()const override{
        std::cout<<"Audio is playing"<<std::endl;
    }

    
};

class Video: public Media{
private:
    std::string resolution;
    double duration;
public:
    Video(std::string res, double dur):resolution(res),duration(dur){}

    void changeResolution(std::string newRes){
        resolution = newRes;
    }
        void info()const override{
        std::cout<<static_cast<int>(duration)<<std::endl;
    }
    void play()const override{
        std::cout<<"Video is playing"<<std::endl;
    }
};

class Mediamanager{
private:
    std::vector<Media*> gallery;
public:
    void addmedia(Media* m){
        gallery.push_back(m);
    }

    void processImage(Media* m){
        Image* img = dynamic_cast<Image*>(m);
        if(img){
            img->resize("3840 x 2160");
            return;
        } 

        Audio* mp = dynamic_cast<Audio*>(m);
        if(mp){
            mp->trimAudio();
            return;
        }

        Video* hd = dynamic_cast<Video*>(m);
        if(hd){
            hd->changeResolution("2048hd");
        }
    }

    ~Mediamanager(){
        if(gallery.empty()){
            std::cout<<"gallery is empty"<<std::endl;
        
        }
        else{
        for (int i = 0; i < gallery.size(); ++i){
            delete gallery[i];
        }
        }
        gallery.clear();
    }

    void showAll(){
        for(auto m:gallery){
            m->play();
            m->info();
            std::cout<<"-----------------------"<<std::endl;
        }
    }
};

int main(){

    Mediamanager meneger;
    meneger.addmedia(new Image("1920x1080"));
    meneger.addmedia(new Audio(103.0));
    meneger.addmedia(new Video("Hd", 2048));

    meneger.showAll();

    return 0;
}
