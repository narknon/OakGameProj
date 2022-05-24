#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxAction.h"
#include "GibData.h"
#include "ImpactResponseEffect.h"
#include "GbxAction_Gib.generated.h"

class UWwiseEvent;
class USpawnPatternData;
class AActor;
class UParticleSystem;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_Gib : public UGbxAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 MaxGibCount;
    
    UPROPERTY(EditAnywhere)
    TArray<FGibData> Gibs;
    
    UPROPERTY(EditAnywhere)
    float GibMinScale;
    
    UPROPERTY(EditAnywhere)
    float GibMaxScale;
    
    UPROPERTY(EditAnywhere)
    USpawnPatternData* GibSpawnPattern;
    
    UPROPERTY(EditAnywhere)
    float GibMassScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> GibActorClass;
    
    UPROPERTY(EditAnywhere)
    FImpactResponseEffect GibEffect;
    
    UPROPERTY(EditAnywhere)
    float GibEffectScale;
    
    UPROPERTY()
    UParticleSystem* GibParticle;
    
    UPROPERTY()
    UWwiseEvent* GibSound;
    
public:
    UGbxAction_Gib();
};

