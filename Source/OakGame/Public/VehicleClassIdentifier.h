#pragma once
#include "CoreMinimal.h"
#include "Engine/PrimaryAssetLabel.h"
#include "VehicleClassIdentifier.generated.h"

UCLASS(BlueprintType)
class OAKGAME_API UVehicleClassIdentifier : public UPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ShortName;
    
    UVehicleClassIdentifier();
};

