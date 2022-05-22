#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersRoomAssignment.generated.h"

class UPlayerClassIdentifier;
class UDynamicRoomBaseData;

USTRUCT(BlueprintType)
struct FCrewQuartersRoomAssignment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPlayerClassIdentifier* AssociatedPlayerClass;
    
    UPROPERTY(EditAnywhere)
    UDynamicRoomBaseData* AssociatedRoom;
    
    OAKGAME_API FCrewQuartersRoomAssignment();
};

