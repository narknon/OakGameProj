#pragma once
#include "CoreMinimal.h"
#include "ConditionalMultiSelectionGestaltPartNameData.h"
#include "MultiSelectionGestaltPartNameData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FMultiSelectionGestaltPartNameData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    int32 IndexOfType;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FName> GestaltMeshPartNames;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FConditionalMultiSelectionGestaltPartNameData> ConditionalGestaltMeshPartNames;
    
public:
    FMultiSelectionGestaltPartNameData();
};

