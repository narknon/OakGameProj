#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericTeamAgentInterface.h"
#include "SpawnBlueprintLibrary.generated.h"

class AActor;
class ASpawner;
class USpawnOptionData;
class USpawnerStyle;

UCLASS(BlueprintType)
class GBXAI_API USpawnBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawnBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetSpawnOptions(AActor* SpawnerActor, USpawnOptionData* SpawnOptions);
    
    UFUNCTION(BlueprintCallable)
    static ASpawner* GenerateSpawnerByRadius(AActor* Instigator, USpawnerStyle* Style, float Radius, TEnumAsByte<ETeamAttitude::Type> MinRequiredAttitude);
    
    UFUNCTION(BlueprintCallable)
    static ASpawner* GenerateSpawnerByOwningSpawner(AActor* Instigator, USpawnerStyle* Style);
    
};

