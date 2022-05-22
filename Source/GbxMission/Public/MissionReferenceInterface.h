#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "MissionReferenceInterface.generated.h"

class UMission;

UINTERFACE(Blueprintable)
class GBXMISSION_API UMissionReferenceInterface : public UInterface {
    GENERATED_BODY()
};

class GBXMISSION_API IMissionReferenceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMissionClassReferences(TArray<TSubclassOf<UMission>>& OutMissions) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CheckForMissionReferenceErrors() const;
    
};

