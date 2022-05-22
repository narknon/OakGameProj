#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELightBeamQueryActorType.h"
#include "LightBeamQueryData.generated.h"

class AActor;
class ULightBeamData;

USTRUCT(BlueprintType)
struct FLightBeamQueryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELightBeamQueryActorType ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* OtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ULightBeamData> BeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName NameId;
    
    GBXWEAPON_API FLightBeamQueryData();
};

