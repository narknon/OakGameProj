#pragma once
#include "CoreMinimal.h"
#include "RuntimeActorPartListPartTypeData.h"
#include "WeightedActorPartData.h"
#include "RuntimeActorPartListData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRuntimeActorPartListData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    uint8 bIsInitialized: 1;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FRuntimeActorPartListPartTypeData> PartTypeTOC;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FWeightedActorPartData> AllParts;
    
public:
    FRuntimeActorPartListData();
};

