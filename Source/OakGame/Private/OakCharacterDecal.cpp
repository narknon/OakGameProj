#include "OakCharacterDecal.h"

FOakCharacterDecal::FOakCharacterDecal() {
    this->DecalStrength = 0.00f;
    this->bOverrideDecalStrength = false;
    this->bOverrideDecalColor = false;
    this->bOverrideDecalColorHighlight = false;
    this->Texture_Comp = NULL;
    this->Texture_Normal = NULL;
    this->Texture_BaseColor = NULL;
}

