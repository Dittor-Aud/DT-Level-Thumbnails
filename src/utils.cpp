#include "utils.hpp"

using namespace geode::prelude;

int levelthumbs::getQualityMultiplier(){
    return 4 / CCDirector::sharedDirector()->getContentScaleFactor();
}

std::string levelthumbs::getBaseUrl(){
    std::string baseURL = "https://raw.githubusercontent.com/Dittor-Aud/thumbning/main/thunb";
    return baseURL;
}
