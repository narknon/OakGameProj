#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeightedActorPartData.h"
#include "ActorPartListData.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FActorPartListData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UEnum* PartTypeEnum;
    
    UPROPERTY(VisibleAnywhere)
    uint8 PartType;
    
    UPROPERTY(EditAnywhere)
    bool bCanSelectMultipleParts;
    
    UPROPERTY(EditAnywhere)
    bool bUseWeightWithMultiplePartSelection;
    
    UPROPERTY(EditInstanceOnly)
    FInt32Interval MultiplePartSelectionRange;
    
    UPROPERTY(EditInstanceOnly)
    bool bEnabled;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FWeightedActorPartData> Parts;
    
public:
    FActorPartListData();
};

