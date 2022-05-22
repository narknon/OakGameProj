#pragma once
#include "CoreMinimal.h"
#include "GbxFaceFXAnimData.h"
#include "GbxFaceFXAnimSetData.generated.h"

USTRUCT(BlueprintType)
struct FGbxFaceFXAnimSetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGbxFaceFXAnimData> FaceFXAnimDataList;
    
    FACEFX_API FGbxFaceFXAnimSetData();
};

