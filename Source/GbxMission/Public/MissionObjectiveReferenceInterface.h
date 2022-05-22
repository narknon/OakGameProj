#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MissionObjectiveReference.h"
#include "MissionObjectiveReferenceInterface.generated.h"

UINTERFACE(Blueprintable)
class GBXMISSION_API UMissionObjectiveReferenceInterface : public UInterface {
    GENERATED_BODY()
};

class GBXMISSION_API IMissionObjectiveReferenceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMissionObjectiveReferences(TArray<FMissionObjectiveReference>& OutMissionObjectives) const;
    
};

