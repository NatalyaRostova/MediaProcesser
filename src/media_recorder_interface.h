#pragma once

#include <string>

class MediaRecorder {
public:
    static MediaRecorder* CreateMP4VideoRecoder();

    virtual bool Start(void* param) = 0;
    virtual bool SendVideoFrame(void* data, int size) = 0;
    virtual bool SendAudioFrame(void* data, int size) = 0;
    virtual bool Stop() = 0;
};

struct MP4VideoRecorderStartParam {
    int width;
    int height;
    int fps;

    std::string filename;
};