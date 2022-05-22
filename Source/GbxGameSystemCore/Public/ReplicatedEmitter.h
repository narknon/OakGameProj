#pragma once
#include "CoreMinimal.h"
#include "Particles/Emitter.h"
#include "ReplicatedEmitterTemplateOptions.h"
#include "EmitterWwiseEvent.h"
#include "EmitterFloatParam.h"
#include "EmitterVectorParam.h"
#include "EmitterColorParam.h"
#include "ReplicatedEmitter.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API AReplicatedEmitter : public AEmitter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OwnerNoSeeEmitter)
    bool bOwnerNoSeeEmitter;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TemplateOptions)
    FReplicatedEmitterTemplateOptions TemplateOptions;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedFloatParams)
    TArray<FEmitterFloatParam> ReplicatedFloatParams;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedVectorParams)
    TArray<FEmitterVectorParam> ReplicatedVectorParams;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedColorParams)
    TArray<FEmitterColorParam> ReplicatedColorParams;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedWwiseEvent)
    FEmitterWwiseEvent ReplicatedWwiseEvent;
    
public:
    AReplicatedEmitter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_TemplateOptions();
    
    UFUNCTION()
    void OnRep_ReplicatedWwiseEvent();
    
    UFUNCTION()
    void OnRep_ReplicatedVectorParams();
    
    UFUNCTION()
    void OnRep_ReplicatedFloatParams();
    
    UFUNCTION()
    void OnRep_ReplicatedColorParams();
    
    UFUNCTION()
    void OnRep_OwnerNoSeeEmitter();
    
};

