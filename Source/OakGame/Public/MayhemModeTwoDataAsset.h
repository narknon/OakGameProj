#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "MayhemCoreModifierSet.h"
#include "MayhemModeTwoDataAsset.generated.h"

class UMayhemModifierSlotInterface;
class UMayhemOverrideDataAsset;

UCLASS()
class OAKGAME_API UMayhemModeTwoDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxMayhemLevel;
    
    UPROPERTY(EditAnywhere)
    FMayhemCoreModifierSet CoreModifierSet;
    
    UPROPERTY(EditAnywhere)
    TArray<UMayhemModifierSlotInterface*> RandomModifierSlots;
    
    UPROPERTY(EditAnywhere)
    UMayhemOverrideDataAsset* OverrideData;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MapsToExclude;
    
    UMayhemModeTwoDataAsset();
};

