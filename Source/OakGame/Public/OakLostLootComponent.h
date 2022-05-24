#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "OakLostLootComponent.generated.h"

class ULootSpawnPatternData;
class UPrimitiveComponent;
class UGbxAction;
class AOakPlayerController;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakLostLootComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* SpawnDirectionComponent;
    
public:
    UPROPERTY(EditAnywhere)
    float InitialDropLootMassScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UGbxAction>> LootSpawnActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULootSpawnPatternData* DropLootPattern;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SpawnDirectionComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayBetweenSpawningItem;
    
    UOakLostLootComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnAndDropLoot(AOakPlayerController* OwnerController);
    
};

