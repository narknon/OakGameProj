#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "SwayPatternData.generated.h"

UCLASS()
class USwayPatternData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleDefaultsOnly)
    TArray<FVector2D> Samples;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfOctaves;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfSamplesToGenerate;
    
public:
    USwayPatternData();
};

