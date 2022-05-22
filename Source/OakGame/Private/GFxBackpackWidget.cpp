#include "GFxBackpackWidget.h"

FGFxBackpackWidget::FGFxBackpackWidget() {
    this->bThumbnailMangerIsExternal = false;
    this->GridWidget = NULL;
    this->Listener = NULL;
    this->bIsInited = false;
    this->FirstBackpackItemOfInterest = 0;
    this->bNeedsThumbnailsRefreshed = false;
    this->bDoNotManageThumbnailSweeping = false;
    this->bNeedsSweep = false;
}

