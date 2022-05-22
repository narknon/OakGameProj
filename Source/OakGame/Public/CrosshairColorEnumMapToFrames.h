#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ECrosshairColorsEnum.h"
#include "CrosshairColorEnumMapToFrames.generated.h"

UCLASS(BlueprintType)
class UCrosshairColorEnumMapToFrames : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ECrosshairColorsEnum, int32> MapStringToFrames;
    
    UCrosshairColorEnumMapToFrames();
};

