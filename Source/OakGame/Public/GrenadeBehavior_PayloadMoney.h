#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "MoneyStackValues.h"
#include "UObject/NoExportTypes.h"
#include "GrenadeBehavior_PayloadMoney.generated.h"

class UParticleSystem;
class ULootSpawnPatternData;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadMoney : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FMoneyStackValues> MoneyStackValues;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SpawnLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    ULootSpawnPatternData* SpawningPatternData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SpawningParticles;
    
public:
    UGrenadeBehavior_PayloadMoney();
};

