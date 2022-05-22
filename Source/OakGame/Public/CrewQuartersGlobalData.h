#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CrewQuartersRoomAssignment.h"
#include "CrewQuartersGlobalData.generated.h"

class UDynamicRoomBaseData;
class UCrewQuartersDecorationData;

UCLASS()
class UCrewQuartersGlobalData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UDynamicRoomBaseData*> AvailableRooms;
    
    UPROPERTY(EditAnywhere)
    TArray<FCrewQuartersRoomAssignment> RoomAssignments;
    
    UPROPERTY(EditAnywhere)
    TArray<UCrewQuartersDecorationData*> AvailableDecorations;
    
    UCrewQuartersGlobalData();
};

