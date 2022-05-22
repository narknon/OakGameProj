#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MissionObjectiveSetReference.h"
#include "MissionObjectiveSetReferenceInterface.generated.h"

UINTERFACE(Blueprintable)
class GBXMISSION_API UMissionObjectiveSetReferenceInterface : public UInterface {
    GENERATED_BODY()
};

class GBXMISSION_API IMissionObjectiveSetReferenceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMissionObjectiveSetReferences(TArray<FMissionObjectiveSetReference>& OutMissionObjectiveSets) const;
    
};

