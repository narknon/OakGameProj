#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CrosshairDataAsset.generated.h"

UCLASS()
class UCrosshairDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString CrosshairID;
    
    UPROPERTY(EditAnywhere)
    FString CrosshairFrameName;
    
    UCrosshairDataAsset();
};

