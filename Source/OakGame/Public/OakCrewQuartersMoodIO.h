#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "UseEvent.h"
#include "OakCrewQuartersMoodIO.generated.h"

class ACrewQuartersRoom;
class UGbxMenuData;

UCLASS()
class AOakCrewQuartersMoodIO : public AAdvancedInteractiveObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ACrewQuartersRoom* AssociatedRoom;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* MoodMenuData;
    
public:
    AOakCrewQuartersMoodIO();
private:
    UFUNCTION()
    void OnUsedBy(const FUseEvent& UseEvent);
    
};

