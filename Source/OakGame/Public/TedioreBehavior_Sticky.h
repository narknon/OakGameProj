#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TedioreBehavior.h"
#include "TedioreBehavior_Sticky.generated.h"

class AOakCharacter_Default;
class AActor;

UCLASS(EditInlineNew)
class UTedioreBehavior_Sticky : public UTedioreBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AOakCharacter_Default> StuckAICharacter;
    
    UPROPERTY(EditDefaultsOnly)
    float StuckCharacterInitialLifetime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFlipMirvStickyTiming;
    
public:
    UTedioreBehavior_Sticky();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnAiShootingWeapon(AActor* SpawnedActor);
    
};

