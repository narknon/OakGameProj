#pragma once
#include "CoreMinimal.h"
#include "SpawnerComponent.h"
#include "GameplayTagContainer.h"
#include "GbxSpawnerComponent.generated.h"

class AGbxSpawner;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UGbxSpawnerComponent : public USpawnerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGbxSpawner* GbxSpawner;
    
    UPROPERTY(Transient)
    AGbxSpawner* GroupGbxSpawner;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AdditionalGameplayTags;
    
public:
    UGbxSpawnerComponent();
};

