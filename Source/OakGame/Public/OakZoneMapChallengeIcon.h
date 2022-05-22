#pragma once
#include "CoreMinimal.h"
#include "EZoneMapChallengeStatus.h"
#include "OakZoneMapIcon_POI.h"
#include "ZoneMapChallengeEntry.h"
#include "OakZoneMapChallengeIcon.generated.h"

class UTexture2D;

UCLASS()
class OAKGAME_API AOakZoneMapChallengeIcon : public AOakZoneMapIcon_POI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FZoneMapChallengeEntry ChallengeEntry;
    
    AOakZoneMapChallengeIcon();
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnChallengeUpdated();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EZoneMapChallengeStatus> GetChallengeStatus();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetChallengeIconTexture();
    
};

