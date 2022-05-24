#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "SpawnPointEffect.h"
#include "GameplayTagContainer.h"
#include "SpawnDetails.h"
#include "UObject/NoExportTypes.h"
#include "SpawnLimitData.h"
#include "UObject/NoExportTypes.h"
#include "OakSpawnerDefinition.generated.h"

class AOakSpawner;
class UObject;
class UOakAction_CoordinatedEffect;
class USpawnerStyle;
class AActor;
class USpawnerComponent;
class UOakSpawnerDefinition;
class USpawnOptionData;

UCLASS(BlueprintType)
class UOakSpawnerDefinition : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USpawnerStyle* SpawnerStyle;
    
    UPROPERTY(EditAnywhere)
    FSpawnDetails SpawnDetails;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnLimitData> Limits;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SpawnActionTag;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakAction_CoordinatedEffect> SpecialEffect;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnPointEffect> ConditionalSpecialEffects;
    
    UOakSpawnerDefinition();
    UFUNCTION(BlueprintCallable)
    static AOakSpawner* SpawnOakSpawnerFromDefinitionUsingTransforms(UObject* WorldContextObject, AActor* Owner, USpawnerComponent* SourceSpawnerComponent, UOakSpawnerDefinition* Definition, USpawnOptionData* SpawnOption, const FTransform& Transform, const TArray<FTransform>& SpawnTransforms);
    
    UFUNCTION(BlueprintCallable)
    static AOakSpawner* SpawnOakSpawnerFromDefinition(UObject* WorldContextObject, AActor* Owner, USpawnerComponent* SourceSpawnerComponent, UOakSpawnerDefinition* Definition, USpawnOptionData* SpawnOption, const FTransform& Transform, const TArray<FVector>& SpawnPoints);
    
};

