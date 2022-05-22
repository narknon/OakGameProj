#pragma once
#include "CoreMinimal.h"
#include "ConditionalMultiSelectionGestaltPartNameData.generated.h"

class UActorPartData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FConditionalMultiSelectionGestaltPartNameData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<UActorPartData*> OtherParts;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FName> GestaltMeshPartNames;
    
public:
    FConditionalMultiSelectionGestaltPartNameData();
};

