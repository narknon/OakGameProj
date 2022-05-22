#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELightProjectileQueryActorType.h"
#include "LightProjectileQueryData.generated.h"

class AActor;
class ULightProjectileData;

USTRUCT(BlueprintType)
struct FLightProjectileQueryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELightProjectileQueryActorType ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ULightProjectileData> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName NameId;
    
    GBXWEAPON_API FLightProjectileQueryData();
};

