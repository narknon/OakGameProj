#pragma once
#include "CoreMinimal.h"
#include "SpawnerStyle.h"
#include "EncounterWave.h"
#include "SpawnerStyle_Encounter.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyle_Encounter : public USpawnerStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FEncounterWave> Waves;
    
public:
    USpawnerStyle_Encounter();
};

