#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ImpactResponseInfo.h"
#include "ImpactExpansionData.generated.h"

class UImpactData;

UCLASS()
class GBXGAMESYSTEMCORE_API UImpactExpansionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UImpactData* ImpactDataToExpand;
    
    UPROPERTY(EditAnywhere)
    TArray<FImpactResponseInfo> ImpactResponses;
    
public:
    UImpactExpansionData();
};

