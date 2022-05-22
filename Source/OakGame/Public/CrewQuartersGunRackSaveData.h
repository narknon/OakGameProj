#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersGunRackItemSaveData.h"
#include "CrewQuartersGunRackSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCrewQuartersGunRackSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FCrewQuartersGunRackItemSaveData> RackSaveData;
    
    OAKGAME_API FCrewQuartersGunRackSaveData();
};

