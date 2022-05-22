#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakCARMenuVehicleConfig.h"
#include "OakCARMenuLoadout.generated.h"

class AActor;

UCLASS()
class OAKGAME_API UOakCARMenuLoadout : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FOakCARMenuVehicleConfig VehicleConfig;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> TempPreviewActorClass;
    
    UOakCARMenuLoadout();
};

