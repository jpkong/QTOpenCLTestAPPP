#ifndef HOG_HPP
#define HOG_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include "opencv2/ocl/ocl.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <QtGui/QApplication>
#include "mainwindow.h"

using namespace std;
using namespace cv;

namespace cv
{
    namespace ocl
    {
        class HogArgs
        {
        public:
            HogArgs();
            static HogArgs read(int argc, char** argv);

            string src;
            bool src_is_video;
            bool src_is_camera;
            int camera_id;

            bool write_video;
            string dst_video;
            double dst_video_fps;

            bool make_gray;

            bool resize_src;
            int width, height;

            double scale;
            int nlevels;
            int gr_threshold;

            double hit_threshold;
            bool hit_threshold_auto;

            int win_width;
            int win_stride_width, win_stride_height;

            bool gamma_corr;
        };

        class HogApp
        {
        public:
            HogApp(const HogArgs& s);
            void run(QLabel* lb_image);

            void handleKey(char key);

            void hogWorkBegin();
            void hogWorkEnd();
            string hogWorkFps() const;

            void workBegin();
            void workEnd();
            string workFps() const;

            string message() const;

            inline bool getUseGpu() { return use_gpu; }
            inline int setUseGpu(bool value) { use_gpu = value; return 0; }


        private:
            HogApp operator=(HogApp&);

            HogArgs args;
            bool running;

            bool use_gpu;
            bool make_gray;
            double scale;
            int gr_threshold;
            int nlevels;
            double hit_threshold;
            bool gamma_corr;

            int64 hog_work_begin;
            double hog_work_fps;

            int64 work_begin;
            double work_fps;
        };
    }
}

#endif // HOG_HPP
