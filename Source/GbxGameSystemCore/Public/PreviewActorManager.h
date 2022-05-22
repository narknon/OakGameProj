#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PreviewActorManager.generated.h"

class USceneComponent;
class AActor;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPreviewActorManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    USceneComponent* AttachComponent;
    
    UPROPERTY(NonTransactional)
    AActor* Actor;
    
    UPROPERTY()
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY()
    AActor* ActorTemplate;
    
public:
    FPreviewActorManager();
};

