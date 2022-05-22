#pragma once
#include "CoreMinimal.h"
#include "OakThumbnailManagerIcon.h"
#include "OakThumbnailManagerRenderProperties.h"
#include "OakThumbnailManagerItemInfo.generated.h"

USTRUCT()
struct OAKGAME_API FOakThumbnailManagerItemInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FString URL;
    
    UPROPERTY(Transient)
    FOakThumbnailManagerIcon IconData;
    
    UPROPERTY(Transient)
    FOakThumbnailManagerRenderProperties RenderProperties;
    
public:
    FOakThumbnailManagerItemInfo();
};

