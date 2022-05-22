#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DummyProjectileInfo.generated.h"

class AActor;
class UGbxAction;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FDummyProjectileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ProjectileClass;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> TransitInAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> TransitOutAction;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* TransitInSoundEvent;
    
    UPROPERTY(Transient)
    AActor* ProjectileActor;
    
    OAKGAME_API FDummyProjectileInfo();
};

