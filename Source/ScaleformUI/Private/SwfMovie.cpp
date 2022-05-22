#include "SwfMovie.h"

USwfMovie::USwfMovie() {
    this->bUseGFxExport = false;
    this->bOptimizeForMobiles = false;
    this->bSetSRGBOnImportedTextures = false;
    this->bPackTextures = false;
    this->PackTextureSize = 0;
    this->bArePackedTextures4k = false;
    this->bForceSquarePacking = false;
    this->TextureRescale = FlashTextureScale_High;
    this->bReplaceImages = false;
    this->bUseOrderedLoading = false;
    this->bLoadImageFiles = false;
    this->TextureLoadPriority = 75;
    this->ImportTimeStamp = 0;
}

