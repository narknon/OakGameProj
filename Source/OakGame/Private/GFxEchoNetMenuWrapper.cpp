#include "GFxEchoNetMenuWrapper.h"

UGFxEchoNetMenuWrapper::UGFxEchoNetMenuWrapper() {
    this->RosterMenuPageIndex = 0;
    this->MenuToGotoOffline = TEXT("FrontEndLanding");
    this->BackdropParticleSystem = NULL;
    this->BackgroundParticleDepth = 100.00f;
    this->NavBarClip = NULL;
    this->TargetPC = NULL;
}

