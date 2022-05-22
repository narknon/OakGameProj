#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "Styling/SlateBrush.h"
#include "GbxPlatformToGlyphMap.generated.h"

UCLASS()
class GBXUI_API UGbxPlatformToGlyphMap : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FSlateBrush> PlatformMap;
    
public:
    UGbxPlatformToGlyphMap();
};

