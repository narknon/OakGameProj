#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AnimStateGroup.h"
#include "GbxAnimStateMachineDefinition.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAnimStateMachineDefinition : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> StateMachines;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAnimStateGroup> StateGroups;
    
    UGbxAnimStateMachineDefinition();
};

