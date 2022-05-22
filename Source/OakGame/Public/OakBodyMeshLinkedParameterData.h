#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "BodyMeshLinkedParameters.h"
#include "OakBodyMeshLinkedParameterData.generated.h"

UCLASS()
class OAKGAME_API UOakBodyMeshLinkedParameterData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBodyMeshLinkedParameters> OwnerClassesToParameters;
    
    UOakBodyMeshLinkedParameterData();
};

