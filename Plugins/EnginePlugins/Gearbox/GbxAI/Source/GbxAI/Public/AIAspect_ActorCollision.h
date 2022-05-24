#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "UObject/NoExportTypes.h"
#include "AIAspectSettings_ActorCollision.h"
#include "Engine/EngineTypes.h"
#include "AIAspect_ActorCollision.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_ActorCollision : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_ActorCollision Settings;
    
    UAIAspect_ActorCollision();
    UFUNCTION()
    void OnPawnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    static void GetOnCollisionOptions(TArray<FName>& Options);
    
};

