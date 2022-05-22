#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CrewQuartersRoomItemData.generated.h"

UCLASS()
class UCrewQuartersRoomItemData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FString RoomAssetPath;
    
    UPROPERTY(EditAnywhere)
    bool bIsDLC;
    
    UCrewQuartersRoomItemData();
};

