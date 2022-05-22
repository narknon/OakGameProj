#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GbxFaceFXAnimSetData.h"
#include "FaceFXAnimSet.generated.h"

UCLASS()
class FACEFX_API UFaceFXAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxFaceFXAnimSetData FaceFXAnimSetData;
    
    UFaceFXAnimSet();
};

