#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxSpawnerComponent.h"
#include "OakSpawnerComponent.generated.h"

class UOakAction_CoordinatedEffect;
class USpawnerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakSpawnerComponent : public UGbxSpawnerComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool RandomItemDropped;
    
    UPROPERTY(EditAnywhere)
    bool bPlayableAreaAssist;
    
    UPROPERTY(EditAnywhere)
    float CorpseRemovalOverrideTime;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakAction_CoordinatedEffect> CorpseRemovalOverrideAction;
    
    UOakSpawnerComponent();
private:
    UFUNCTION()
    void OnWaveWarmupCallback(USpawnerComponent* SpawnerComponent, int32 WaveIndex);
    
};

