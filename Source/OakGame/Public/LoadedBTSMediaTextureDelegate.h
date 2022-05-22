#pragma once
#include "CoreMinimal.h"
#include "LoadedBTSMediaTextureDelegate.generated.h"

class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLoadedBTSMediaTexture, UTexture2D*, LoadedTexture2D);

